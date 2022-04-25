#include "fila.h"


void FFVazia(Fila *f){
	f->first = 1;
	f->last  = 1;
}

void Enfileira(Fila *f, Item d){
	if (f->last % MAXTAM + 1 == f->first){
		printf("FILA CHEIA!\n");
	}else{
		f->vet[f->last - 1] = d;
		f->last = f->last % MAXTAM + 1;
	}
}

void Desenfileira(Fila *f, Item *d){
	if(f->first == f->last)
		printf("FILA VAZIA!\n");
	else{
		*d = f->vet[f->first - 1];
		f->first = f->first % MAXTAM + 1;
	}
}

void FRemove(Fila *f, Item d){
	Fila aux;
	Item rem;
	
	FFVazia(&aux);

	if(f->first == f->last)
		printf("FILA VAZIA!\n");
	else{
		while(f->first != f->last){
			Desenfileira(f, &rem);
			if(rem.val != d.val)
				Enfileira(&aux, rem);
		}
		
		*f = aux;
	}
}

void FImprime(Fila *f){
	int aux = f->first;
	
	while(aux != f->last){
		printf("%d\t", f->vet[aux-1].val);
		aux = aux % MAXTAM + 1;
	}

	printf("\n");
		
}






