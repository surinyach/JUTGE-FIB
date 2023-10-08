#include "BinTree.hh"

using namespace std;

int maxim(int a, int b) {
    if (a < b) return b;
    else return a;
}

int altura(const BinTree<int>& a, BinTree<int>& agd) {
    /* Pre: a=A */
    /* Post: agd es un arbre amb la mateixa estructura que A on cada
        node conte el grau de desequilibri del subarbre d'A corresponent
        i es retorna la maxima distancia entre el node i una fulla */
    if (a.empty()) return 0;
    else {
        BinTree<int> a1 = a.left();
        BinTree<int> a2 = a.right();
        BinTree<int> ag1 = a1; 
        BinTree<int> ag2 = a2;
        int alt1 = altura(a1, ag1);
        int alt2 = altura(a2, ag2);
        agd = BinTree<int>(alt1 - alt2, ag1, ag2);
        return maxim(alt1, alt2) + 1;
    }
}

void arbre_graus_desequilibri(const BinTree<int> &a, BinTree<int> &agd) {
    /* Pre: a=A */
    /* Post: agd es un arbre amb la mateixa estructura que A on cada
        node conte el grau de desequilibri del subarbre d'A corresponent */
    altura(a, agd);
}
