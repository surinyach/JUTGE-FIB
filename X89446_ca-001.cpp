Llista reorganitzar_out(const T& x) const {
  Llista l;
  if (longitud == 0) return l;
  // <= [primer_node ... ult_men]
  // >  [act ... ultim_node]
  node_llista* m = primer_node;
  node_llista* ult_men = NULL;
  l.longitud = longitud;
  l.act = l.ultim_node = l.primer_node = NULL; 
  while (m != NULL) {
     if (m->info <= x) { // m pasa a ser el último de los menores o iguales
         if (ult_men == NULL) {
	    ult_men = new node_llista;      // último de los <=
            ult_men->ant = NULL;
            l.primer_node = ult_men;  // primero de los <=  
	 }
	 else {
            ult_men->seg = new node_llista; 
            (ult_men->seg)->ant = ult_men;
            ult_men = ult_men->seg;
         }  
         ult_men->info = m->info;
      }
      else {
	 if (l.act == NULL) { // m pasa a ser el último de los mayores
	    l.act = new node_llista;        // primero de los >
            l.act->ant = NULL; 
            l.ultim_node = l.act; // último de los >
         }
         else {
	    l.ultim_node->seg = new node_llista; 
            (l.ultim_node->seg)->ant = l.ultim_node; 
            l.ultim_node = l.ultim_node->seg; 
         }
         l.ultim_node->info = m->info;
      }
      m = m->seg;
  }
  // ajustar los finales de las dos cadenas separadas de nodos
  if (l.primer_node == NULL) l.primer_node = l.act; 
  else if (l.act == NULL) l.ultim_node = ult_men; 
  else { // ambas cadenas son no vacías
    ult_men->seg = l.act; 
    l.act->ant = ult_men; 
  }
  l.ultim_node->seg = NULL;
  return l; 
}