#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define A 15
#define B 10

int main() {

	int v[A][B];
	int i, o, opcao, y = 0, z = 0, nvNum, j, linha = 0, coluna = 0, soma = 0;

	srand(time(NULL));

		for(i = 0; i < A; i++){
			for(o = 0; o < B; o++){
				v[i][o]= rand() % 501;
			}
		}

	do {

        printf("\n(1) Cadastrar novos numeros no array\n(2) Limpar o array\n(3) Imprimir o conteudo do array\n(4) Alterar um numero no array\n(5) Imprimir uma determinada linha do array\n(6) Imprimir uma determinada coluna do array\n(7) Imprimir o somatorio dos numeros do array\n(0) Sair\nOpcao: ");
        scanf("%d", &opcao);

        switch (opcao){
            case 0:
                break;

            case 1:

            srand(time(NULL));

            for(i = 0; i < A; i++){
                for(o = 0; o < B; o++){
                    v[i][o]= rand() % 501;
                }
            }
            printf("\nNovos números cadastrados\n");
            break;

            case 2:

            for(i = 0; i < A; i++){
                for(o = 0; o < B; o++){
                    v[i][o] = 0;
                }
            }
            break;

            case 3:

            printf("\n");
            for(i = 0; i < A; i++){
                for(o = 0; o < B; o++){
                    printf("%5d", v[i][o]);
                }
                printf("\n\n");
            }
            break;

            case 4:

                printf("Escolha uma linha (0 a 15): ");
                scanf("%d", &y);

                printf("Escolha uma coluna (0 a 10): ");
                scanf("%d", &z);

                if (y >= 0 && y < A && z >= 0 && z < B) {
                    printf("Digite o novo numero(1 a 500): ");
                    scanf("%d", &nvNum);
                    v[i][o] = nvNum;
                    printf("Novo numero gravado!");

                } else {
                    printf("Intervalo invalido!");
                }
            break;

            case 5:

                printf("\nQual linha você deseja imprimir? ");
                scanf("%d", &linha);

                printf("\nConteudo da linha %d: \n", linha);
                for (i = 0; i < A; i++) {
                    printf("%d\n", v[linha - 1][i]);

                }
            break;

            case 6:

                printf("\nQual coluna você deseja imprimir? ");
                scanf("%d", &coluna);

                printf("\nConteudo da coluna %d: \n", coluna);
                for (i = 0; i < A; i++) {
                    printf("%d\n", v[i][coluna - 1]);

                }
            break;

            case 7:

                for(i = 0; i < A; i++){
                    for(o = 0; o < B; o++){
                        soma += v[i][o];
                    }
                }
                printf("\nSomatorio: %d\n", soma);

            break;
        }
	} while(opcao != 0);

    return 0;
}
