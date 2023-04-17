#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int mat[4][4]={45, 32, 83, 95, 26, 14, 37, 42, 40, 43, 65, 77, 74, 79, 48, 55};
	int x, y, soma;	
	
	printf("          Dados da Matriz: \n\n\n");
	for(x = 0; x < 4; x++){
		for(y=0; y < 4; y++)
		printf("\t%d", mat[x][y]);
		printf("\n\n");
	}
	
		soma = mat[2][0] + mat[2][1] + mat[2][2] + mat[2][3];
	
	printf("\n A soma dos dados da figura são: %d", soma);
	
	
	
	
	return 0;
}
