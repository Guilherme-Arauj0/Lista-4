#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int mat[4][4]={45, 32, 83, 95, 26, 14, 37, 42, 40, 43, 65, 77, 74, 79, 48, 55};
	int x, y, mult;
	
	printf("             Dados da Matriz:\n\n\n");
	for(x=0;x<4;x++){
		for(y=0;y<4;y++)
		printf("\t%d", mat[x][y]);
		printf("\n\n");
	}
	
		mult = mat[0][1] * mat[1][1] * mat[2][1] * mat[3][1];
	
	printf("O resultado da multiplacação destacada na imagem é: %d", mult);
	
	
	return 0;
}
