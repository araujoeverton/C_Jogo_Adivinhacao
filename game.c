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

    if (chute == numeroSecreto){
        printf("Parabéns, você acertou!!!\n");
        printf("Jogue de novo, você é um bom jogador!!\n");
    }
    else{
        if(chute > numeroSecreto){
            printf("Seu chute foi maior que o número secreto. Tente novamente!\n");
        }
        if(chute < numeroSecreto){
            printf("Seu chute foi menor que o número secreto. Tente novamente!\n");
        }
    }


}
