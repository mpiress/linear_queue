#include "fila.h"

int main()
{
	Fila f;
	Item aux;

	FFVazia(&f);

	aux.val = 10;
	Enfileira(&f, aux);
	aux.val = 20;
	Enfileira(&f, aux);
	aux.val = 30;
	Enfileira(&f, aux);
	aux.val = 40;
	Enfileira(&f, aux);
	FImprime(&f);
	Desenfileira(&f, &aux);
	Enfileira(&f, aux);
	
	//aux.val = 20;
	//Enfileira(&f, aux);
	
	FImprime(&f);

	
	//FImprime(&f);

	return 0;
}
