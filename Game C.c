#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main ()
{

int segundos = time(0);
    srand(segundos);

int numerogrande = rand();
int numerosecret = numerogrande %5;

printf("\nBEM VINDO AO                                               ");
printf("\n   _____          __  __ ______                            ");
printf("\n  / ____|   /\\   |  \\/  |  ____|                         ");
printf("\n | |  __   /  \\  | \\  / | |__    DE                      ");
printf("\n | | |_ | / /\\ \\ | |\\/| |  __|    ADIVINHAR             ");
printf("\n | |__| |/ ____ \\| |  | | |____                           ");
printf("\n \\______/_/    \\_\\_|  |_|______|                        ");
                                                                    
                                                                        
    printf ("\n\nDica: inteiro e comportado, no 6 eu paro. \n\n");

int tentativas = 1;
int pontos = 100;
int chute;     
   
    while(1){
        
        printf("\ntentativa %d\n", tentativas);
        printf ("Qual o seu chute?");
        scanf ("%d", &chute);
        printf("Seu chute foi %d", chute);

if(chute < 0){
    printf("\nproibido negativos -1 ponto para tu!");

    continue;
}


int acertou = (chute == numerosecret);
            if (acertou) {
            printf ("\nCERTO!");
            break;
            }
            else {
                if(chute >= 100){
                printf("\nTA LOUCO???");
                }
            
            printf("\n\nERROU!!!\n");
            }
        tentativas = tentativas + 1;
int pontosperdidos = (tentativas*tentativas);
        pontos = pontos - pontosperdidos;
               
        }
printf("\n\nFIM DE JOGO...");
printf("\nVOCE ACERTOU EM %d TENTATIVAS", tentativas);
printf("\nPONTOS: %d\n", pontos);
                
                if(pontos <= 0){
                printf("\nNEGATIVO?? MUITO BURRO!!!");
                } 
fflush(stdin);
getchar();

return 0;
            }