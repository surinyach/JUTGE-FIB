bool buscar(const T& x) const {
/* Pre: cert */
/* Post: el resultat indica si x es troba al p.i. o no */
    return buscar_node(x, primer_node); 
}

static bool buscar_node(const T& x, node_arbreGen* m) {
/* Pre: cierto */
/* Post: el resultado indica si x se encuentra en la jerarquia 
 *de nodos cuya raíz apunta m */
    if (m == nullptr) return false; 
    if (m->info == x) return true; 
    int ari = m->seg.size(); 
    for (int i = 0; i < ari; ++i) {
        // H.I.: Si x se encuentra en la jerarquia de nodos
        // a la que apunta m->seg[i] el resultado es true; 
        // en otro caso, el resultado es false. 
        if (buscar_node(x, m->seg[i])) return true; 
    }
    return false; 
}
