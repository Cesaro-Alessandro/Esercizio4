#include <stdio.h>
#include <math.h>
double numero1, numero2;
double rapporto, radice;
int main(int argc, char *argv[])
{
    do
    {
        printf("Inserisci un numero \n");
        scanf("%lf", &numero1);
        printf("Inserisci un secondo numero \n");
        scanf("%lf", &numero2);

        if (numero1 > numero2)
        {
            rapporto = numero1 / numero2;
        }
        else
        {
            rapporto = numero2 / numero1;
        }
        printf("Il rapporto vale: %lf \n", rapporto);
        radice = sqrt(rapporto);
        printf("La radice vale: %lf \n", radice);
    } while (rapporto >= 0);

    printf("Il programma è terminato perchè le radici quadrate di un numero negativo non esistono \n");
    return 0;
}