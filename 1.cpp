#include <stdio.h>

void imprime_arreglo(char a[],int n){
	
	for (int i=0;i<n;i++){
	printf("Elemento numero %d = %s", i+1, a[i]);
	printf("\n");
	}
}

int main(){
	char a1[100],a2[100],n;
	
	printf("Introduce el arreglo: ");
	gets(a1);
	
	a2=imprime_arreglo(a1[100],n);
	
	printf("El arreglo es: %s \n", a2);
	
	
	
}
