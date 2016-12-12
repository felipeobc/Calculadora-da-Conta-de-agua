#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int Faixa_de_Consumo, Categoria, Leitura_Anteriror, Leitura_Atual, Opcao;
    double Consumo;
do{
     Opcao == 1;

    printf("Digite Digite a Quantidade Anterior: ");
    scanf("%d", &Leitura_Anteriror);
    printf("Digite Digite a Quantidade Atual: ");
    scanf("%d", &Leitura_Atual);

    Faixa_de_Consumo = Leitura_Atual - Leitura_Anteriror;

    printf("Faixa de Comsumo: %d(m)\n", Faixa_de_Consumo);

    do{

        printf("Categorias\n");
        printf("(1) Residencia Sociais\n");
        printf("(2) Residencia Normal\n");
        printf("(3) Comercial \\ Industrial\n");
        printf("Residencia Sociais: Moradias Populares (Favelas, CDHU, Previdencia etc) \n");
        printf("Residencia Normal: (Casas, Apartamantos) \n\n");
        printf("Escolha a sua Categoria: ");
        scanf("%d", &Categoria );

    }while(Categoria>0 && Categoria>7);

    switch(Categoria){
        case 1:
            printf("Residencia Sociais\n\n");

            if(Faixa_de_Consumo <= 10){

                Consumo = (5.79) *2;
                    printf("Valor a Pagar R$: %.2f \n\n", Consumo);
            }

            if(Faixa_de_Consumo > 10 && Faixa_de_Consumo <= 20){

                Consumo = (11.58 + 0.66 * (Faixa_de_Consumo-10)) *2;
                    printf("Valor a Pagar R$: %.2f \n\n", Consumo);
            }

            if(Faixa_de_Consumo > 20 && Faixa_de_Consumo <= 30){

                Consumo = (17.52 + 2.19 * (Faixa_de_Consumo-20)) *2;
                    printf("Valor a Pagar R$: %.2f \n\n", Consumo);
            }

            if(Faixa_de_Consumo > 30 && Faixa_de_Consumo <= 50){

                Consumo = (109.50 + 6.62 * (Faixa_de_Consumo-30)) *2;
                    printf("Valor a Pagar R$: %.2f\n\n", Consumo);
            }

            if(Faixa_de_Consumo > 50){

                Consumo = (470.56 + 7.31 * (Faixa_de_Consumo-50)) *2;
                    printf("Valor a Pagar R$: %.2f \n\n", Consumo);
            }
            break;

        case 2:
            printf("Residencias Normais \n\n");

            if(Faixa_de_Consumo <= 10){

                Consumo = (22.38) *2;
                    printf("Valor a Pagar R$: %.2f \n\n", Consumo);
            }

            if(Faixa_de_Consumo > 10 && Faixa_de_Consumo <= 20){

                Consumo = (22.38 + 3.50 * (Faixa_de_Consumo-10)) *2;
                    printf("Valor a Pagar R$: %.2f \n\n", Consumo);
            }

            if(Faixa_de_Consumo > 20 && Faixa_de_Consumo <= 50){

                Consumo = (53.88 + 8.75 * (Faixa_de_Consumo-30)) *2;
                    printf("Valor a Pagar R$: %.2f\n\n", Consumo);
            }

            if(Faixa_de_Consumo > 50){

                Consumo = (307.63 + 9.64 * (Faixa_de_Consumo-50)) *2;
                    printf("Valor a Pagar R$: %.2f \n\n", Consumo);
            }
            break;

        case 3:
            printf("Residencias Normais \n\n");

            if(Faixa_de_Consumo <= 10){

                Consumo = (44.95) *2;
                    printf("Valor a Pagar R$: %.2f \n\n", Consumo);
            }

            if(Faixa_de_Consumo > 10 && Faixa_de_Consumo <= 20){

                Consumo = (89.90 + 8.75 * (Faixa_de_Consumo-10)) *2;
                    printf("Valor a Pagar R$: %.2f \n\n", Consumo);
            }

            if(Faixa_de_Consumo > 20 && Faixa_de_Consumo <= 50){

                Consumo = (168.65 + 16.76 * (Faixa_de_Consumo-30)) *2;
                    printf("Valor a Pagar R$: %.2f\n\n", Consumo);
            }

            if(Faixa_de_Consumo > 50){

                Consumo = (647.69 + 17.46 * (Faixa_de_Consumo-50)) *2;
                    printf("Valor a Pagar R$: %.2f \n\n", Consumo);
            }
            break;

    }
    printf("Desja fazer um novo calculo?\n");
    printf("(1) Sim\n(2) Nao\n\nEscolha uma opcao: ");
    scanf("%d", &Opcao );
        }while(Opcao == 1);
    return 0;

}
