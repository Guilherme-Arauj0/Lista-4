#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int mat[4][4]={45, 32, 83, 95, 26, 14, 37, 42, 40, 43, 65, 77, 74, 79, 48, 55};
	int x, y, soma1, soma2, comp;
	
	printf("             Dados da Matriz:\n\n\n");
	for(x=0;x<4;x++){
		for(y=0;y<4;y++)
		printf("\t%d", mat[x][y]);
		printf("\n\n");
	}
	
	soma1 = mat[1][0] + mat[1][1] + mat[1][2] + mat[1][3];
	soma2 = mat[3][0] + mat[3][1] + mat[3][2] + mat[3][3];
	
	printf("A Soma da linha 1 é %d, a soma da linha 3 é %d.\n\n", soma1, soma2);
	
	comp = soma1 - soma2;
	
	if(comp<0){
		printf("A soma da linha 3 é maior.\n");
	}else if(comp>0){
			printf("A soma da linha 1 é maior.\n");
	}
	
	return 0;
}
