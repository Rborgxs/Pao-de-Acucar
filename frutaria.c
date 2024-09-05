#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

void main() {
    float carrinho = 0; 
    int opc = 0, item1, peso, item2;
    char nome[99], teste[99];

    system("clear");
    printf("\n* CADASTRO\n------------");
    printf("\nDigite seu nome: ");
    scanf("%s", nome);
    printf("Digite seu endereço: "); 
    scanf("%s", teste);
    printf("Digite seu telefone: (71) 9");
    scanf("%s", teste);
    printf("\n\nCadastro concluido ;)\nInsira qualquer tecla para iniciarmos...\n");
    scanf("%s", teste);

    system("clear");
    printf("\n\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~\n\t\t\t     PÃO DE AÇÚCAR\n\t\t\t  Lugar de gente feliz\n\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\n\tMENU\n--------------------\n~ ATÉ 5KG\n* Morango - R$7,50 p/Kg\n* Maçã - R$3,50 p/Kg\n\n~ ACIMA DE 5KG\n* Morango - R$5,30 p/Kg\n* Maçã - R$2,80 p/Kg");
    printf("\n\n%s! Bem-vindo(a) à melhor frutaria do mundo!\n", nome);
    printf("Veja o menu e insira qualquer tecla quando estiver pronto...\n");
    scanf("%s", teste);
    system("clear");

    do {
        system("clear");
        printf("\n\n\tMENU\n--------------------\n~ ATÉ 5KG\n* Morango - R$7,50 p/Kg\n* Maçã - R$3,50 p/Kg\n\n~ ACIMA DE 5KG\n* Morango - R$5,30 p/Kg\n* Maçã - R$2,80 p/Kg");
        printf("\n\nEscolha um produto:\nCarrinho: R$%.2f\n[1] Morango\n[2] Maça\n[0] Finalizar\n", carrinho);
        scanf("%d", &opc);

        switch(opc) {
            case 0:
                system("clear");
                if(item1 + item2 <5 && carrinho > 19){
                    printf("Desconto Aplicado! (- R$%.2f)", 0.08*carrinho);
                }
                printf("\nValor Total: R$%.2f\nMorango: %dKg\nMaçãs: %dKg\n\nVolte sempre %s :)", carrinho*0.92, item1, item2, nome);
                break;

            case 1:
                printf("Quantos Kg de MORANGO você deseja? ");
                scanf("%d", &peso);
                item1 += peso;
                if(peso <= 5) {
                    carrinho += peso * 7.5;
                } else {
                    carrinho += peso * 5.3;
                }
                break;

            case 2:
                printf("Quantos Kg de MAÇÃ você deseja? ");
                scanf("%d", &peso);
                item1 += peso;
                if(peso <= 5) {
                    carrinho += peso * 3.5;
                } else {
                    carrinho += peso * 2.8;
                }
                break;

            default:
                printf("\n\nOPERAÇÃO INVÁLIDA!\nRedirecionando...");
                sleep(1);
                break;
        }
    } while(opc != 0);
}
