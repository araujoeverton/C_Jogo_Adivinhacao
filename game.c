#include <stdio.h>

int main(){
	// imprime o cabecalho do nosso jogo
	printf("******************************************\n");
	printf("* Bem vindo ao nosso jogo de adivinhacao *\n");	
	printf("******************************************\n");

	int numeroSecreto = 42;

	int chute;

	printf("Qual e o seu chute?");
	scanf("%d", &chute);
	printf("Seu chute foi %d\n", chute);

    int acertou = (chute == numeroSecreto);
        if (acertou){
            printf("Parabéns, você acertou!!!\n");
            printf("Jogue de novo, você é um bom jogador!!\n");
        }
        else{
            int maior = (chute > numeroSecreto);
            if(maior){
                printf("Seu chute foi maior que o número secreto. Tente novamente!\n");
            }
            else{
                printf("Seu chute foi menor que o número secreto. Tente novamente!\n");
            }
    }


}
