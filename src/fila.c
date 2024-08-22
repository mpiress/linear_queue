#include "fila.h"


void FFVazia(Fila *f) {
    f->first = 0;
    f->last = 0;
}

bool FilaCheia(Fila *f) {
    return (f->last + 1) % MAXTAM == f->first;
}

bool FilaVazia(Fila *f) {
    return f->first == f->last;
}

void Enfileira(Fila *f, Item d) {
    if (FilaCheia(f)) {
        printf("FILA CHEIA!\n");
    } else {
        f->vet[f->last] = d;
        f->last = (f->last + 1) % MAXTAM;
    }
}

void Desenfileira(Fila *f, Item *d) {
    if (FilaVazia(f)) {
        printf("FILA VAZIA!\n");
    } else {
        *d = f->vet[f->first];
        f->first = (f->first + 1) % MAXTAM;
    }
}

void FRemove(Fila *f, Item d) {
    Fila aux;
    Item rem;
    
    FFVazia(&aux);

    while (!FilaVazia(f)) {
        Desenfileira(f, &rem);
        if (rem.val != d.val) {
            Enfileira(&aux, rem);
        }
    }
    
    *f = aux;
}

void FImprime(Fila *f) {
    int aux = f->first;

    while (aux != f->last) {
        printf("%d\t", f->vet[aux].val);
        aux = (aux + 1) % MAXTAM;
    }
    
    printf("\n");
}






