#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	
	int matriz[4][4] ={{45, 32, 83, 95,}, {26, 14, 37, 42}, {40, 43, 65, 77}, {74, 79, 48, 55}};
	int x, y;
	int soma;
	int media;
	
	printf("           Dados da Matriz:\n\n\n");
	for(x=0; x < 4; x++){
		for(y=0; y < 4; y++)
		printf("\t%d", matriz[x][y]);
		printf("\n\n");
	}
	
	printf("           Média aritimética dos dados presentes na Matriz:\n\n");
	
    for(x = 0; x < 4; x++){
        for(y = 0; y < 4; y++){
            soma += matriz[x][y]; 
            media = soma/16;
        }
    }
	
	printf(" %d", media);
	
	
	
	return 0;
}
