./PaxHeaders.31406/LlistaIOParInt.hh                                                                0000644 0000000 0000000 00000000132 14217276623 014076  x                                                                                                    ustar 00                                                                                                                                                                                                                                                       30 mtime=1648197011.087855098
30 atime=1648196513.936919381
30 ctime=1648197011.087855098
                                                                                                                                                                                                                                                                                                                                                                                                                                      LlistaIOParInt.hh                                                                                   0000700 0103703 0072461 00000000573 14217276623 015462  0                                                                                                    ustar 00santiago.oliver                                                 0000000 0000000                                                                                                                                                                        #ifndef ListaIOParInt_HH
#define ListaIOParInt_HH

#include "ParInt.hh" 
#include <iostream> 
#include <list> 
using namespace std; 

void LlegirLlistaParInt(list<ParInt>& l);
// Pre: l és buida; el canal estandar d’entrada conté un nombre
// parell d’enters, acabat pel parell 0 0
// Post: s’han afegit al final de l els parells llegits fins al 0 0 (no inclòs)

#endif
                                                                                                                                     ./PaxHeaders.31406/LlistaIOParInt.cc                                                                0000644 0000000 0000000 00000000132 14217277546 014071  x                                                                                                    ustar 00                                                                                                                                                                                                                                                       30 mtime=1648197478.587964567
30 atime=1648195144.701786093
30 ctime=1648197478.587964567
                                                                                                                                                                                                                                                                                                                                                                                                                                      LlistaIOParInt.cc                                                                                   0000700 0103703 0072461 00000000533 14217277546 015451  0                                                                                                    ustar 00santiago.oliver                                                 0000000 0000000                                                                                                                                                                        #include "LlistaIOParInt.hh" 

void LlegirLlistaParInt(list<ParInt>& l) {
// Pre: l és buida; el canal estandar d’entrada conté un nombre
// parell d’enters, acabat pel parell 0 0
// Post: s’han afegit al final de l els parells llegits fins al 0 0 (no inclòs)
    ParInt p; 
    while (p.llegir()) {
        l.insert(l.end(), p);
    }
}
                                                                                                                                                                     ./PaxHeaders.31406/program.cc                                                                       0000644 0000000 0000000 00000000132 14217277067 012740  x                                                                                                    ustar 00                                                                                                                                                                                                                                                       30 mtime=1648197175.139139536
30 atime=1648197175.178004821
30 ctime=1648197175.139139536
                                                                                                                                                                                                                                                                                                                                                                                                                                      program.cc                                                                                          0000700 0103703 0072461 00000001066 14217277067 014322  0                                                                                                    ustar 00santiago.oliver                                                 0000000 0000000                                                                                                                                                                        #include <iostream> 
#include <list> 
#include "LlistaIOParInt.hh"
#include "ParInt.hh"
using namespace std; 

int main () {
    
    list <ParInt> l; 
    LlegirLlistaParInt(l); 
    
    int n; 
    cin >> n; 
    
    int cont = 0; 
    int suma = 0; 
    
    list<ParInt>::iterator it = l.begin(); 
    
    while(it != l.end()) {
        
        if ((*it).primer() == n) {
            ++cont; 
            suma += (*it).segon(); 
        }
        
        ++it; 
    }
    
    cout << n << " " << cont << " " << suma << endl; 
}
        
        
    
    
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          