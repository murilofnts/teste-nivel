#include <stdio.h>
#include <locale.h>

void inverterOrdem(int vet[], int n){
	setlocale(LC_ALL, "Portuguese");
	int aux[n];
	for (int i = 0; i < n; i++){
		aux[i] = vet[i];
	}
	for (int i = 0; i < n; i++){
		vet[i] = aux[n-1-i];		
	}
	for (int i = 0; i < 5; i++){
		printf("%i", aux[i]);
	}
}

int main(){
	
	int vet[5] = {1, 2, 3, 4, 5};
	inverterOrdem(vet, 5);
	printf("\n");
	for (int i = 0; i < 5; i++){
		printf("%i", vet[i]);
	}
    return(0);
}
