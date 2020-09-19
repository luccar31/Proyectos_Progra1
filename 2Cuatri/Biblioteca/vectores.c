#include "vectores.h"

void intercambiarEnt(int *e1, int *e2){
    int aux = *e1;
    *e1 = *e2;
    *e2 = aux;
}

int insertar_elemento(int vec[], int ce, int tam, int elem, unsigned pos){

    int *ea = ce;

    if (ce == tam)
        return 0;
    if(pos > ce + 1)
        return 0;

    while (ea > pos - 1){
        vec[ea] = vec [ea - 1];
        ea--;
    }
    vec[ea] = elem;
    return 1;
}

void mostrar_vector(int *vec, int ce){
    int * fin = vec + ce;
    while(vec < fin){
        printf("%d ", *vec);
        vec++;
    }
}

int insertar_elemento_punteros(int vec*, int ce, int tam, int elem, unsigned pos){

}
