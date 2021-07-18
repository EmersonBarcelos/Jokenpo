#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

 int main(){
    setlocale(LC_ALL,"");
    //variaveis para a comparação
    int jogador,computador;
    //variaveis para armazenar o placar
    int placar_jog=0,placar_comp=0;

    printf("****BEM VINDO AO PEDRA-PAPEL-TESOURA****\n");
    printf("O vencedor é quem ganhar 3 rodadas!\n\n");
    while(placar_jog<3 && placar_comp<3){
        printf("-----PLACAR ATUAL-----\nJOGADOR:%d COMPUTADOR:%d\n",placar_jog,placar_comp);
        printf("------------------------------------------\n");
        printf("Escolha a sua jogada:\n\n");
        printf("1 - Tesoura\n");
        printf("2 - Papel\n");
        printf("3 - Pedra\n\n");
        printf("------------------------------------------\n");
        printf("Digite sua jogada:");
        scanf("%d",&jogador);
        system("cls");
        srand(time(NULL));
        //Aqui é gerado um numero aleatório para a maquina
        computador=1 + (rand() % 3);
        printf("Computador escolheu %d e você escolheu %d\n",computador,jogador);
        if(jogador<1 || jogador>3){
            printf("Jogada invalidada!\n");
           }
        if(jogador==computador){
            printf("Empate!\n");
           }
        if((jogador==1 && computador==2) || (jogador==2 && computador==3) || (jogador==3 && computador==1)){
            printf("Você venceu essa rodada\n");
            placar_jog++;
           }
        if((computador==1 && jogador==2) || (computador==2 && jogador==3) || (computador==3 && jogador==1)){
            printf("O computador venceu essa rodada\n");
            placar_comp++;
        }
    }

   system("cls");
   printf("****FIM DE JOGO****");
   printf("\nPLACAR FINAL É JOGADOR:%d COMPUTADOR:%d\n",placar_jog,placar_comp);

   system("pause");
   return 0;

 }
