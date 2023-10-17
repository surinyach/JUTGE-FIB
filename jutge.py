# Script para descargar de forma automatizada las submissions aceptadas de tus problemas en jutge. Estas se guardan en una carpeta llamada JUTGE ubicada en el home.

import os
import requests
from bs4 import BeautifulSoup
import signal 
import sys

def def_handler(sig, frame): 
    print("\n[!] Saliendo...\n")
    sys.exit(1)

# Ctrl+C
signal.signal(signal.SIGINT, def_handler)

# Configuración
jutge_url = 'https://jutge.org'

# Carpeta local para guardar las descargas
jutge_folder = os.path.expanduser('~/JUTGE')

# Cookies de la sesión (interceptadas con Burpsuite y hardcodeadas)
cookies = {
    'PHPSESSID': "EL CAMPO PHPSESSID DE LAS COOKIES DE TU SESIÓN"  
}

# Función para descargar y guardar las submissions correctas
def download_correct_submissions(problem_url, folder_path, problem_code):
    submission_number = 1
    while True:
        submission_url = f"{problem_url}/submissions/S{submission_number:03d}"
        response = requests.get(submission_url, verify=True, cookies=cookies)
        
        # Verificar si la submission existe
        if "Wrong URL" not in response.text and "Accepted" in response.text:
            submission_url_download = f"{problem_url}/submissions/S{submission_number:03d}/download"
            submission = requests.get(submission_url_download, verify=True, cookies=cookies); 
            filename = f"{jutge_folder}/{problem_code}-{submission_number:03d}.cpp"
            open(filename, "wb").write(submission.content) 
           
        else:
            # Detener el bucle si no hay más submissions
            break
        
        submission_number += 1

# Crear carpeta local de JUTGE
os.makedirs(jutge_folder, exist_ok=True)

# Obtener la página de problemas aceptados
accepted_url = 'https://jutge.org/problems/accepted'
response = requests.get(accepted_url, verify=True, cookies=cookies)

soup = BeautifulSoup(response.text, 'html.parser')

# Busca todas las etiquetas <td> en la página
td_elements = soup.find_all('td')

# Inicializa una lista para almacenar los enlaces a los problemas
problem_links = []

# Itera a través de las etiquetas <td>
for td in td_elements:
    # Busca un enlace (<a>) dentro de la etiqueta <td>
    problem_link = td.find('a', href=True)
    
    # Verifica si se encontró un enlace y si el enlace contiene "/problems/"
    if problem_link and "/problems/" in problem_link['href']:
        # Agrega el enlace a la lista de problem_links
        problem_links.append(problem_link['href'])

# Itera a través de los enlaces a los problemas
for problem_link in problem_links:

    print(problem_link); 

    problem_url = jutge_url + problem_link
    
    # Obtiene el código del problema desde el enlace
    problem_code = problem_link.split('/')[-1]

    download_correct_submissions(problem_url, jutge_folder, problem_code)