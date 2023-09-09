#include <stdio.h>

int main ()
{

    double N[6], soma = 0, media;
    int positivos = 0;

    for (int cont = 0; cont <= 5; cont++)
    {
        scanf ("%lf", &N[cont]);
        if (N[cont] > 0)
        {
            soma = soma + N[cont];
            positivos++;
        }
    }

    media = soma / positivos;

    printf ("%d valores positivos\n", positivos);
    printf ("%.1lf\n", media);

    return 0;
}
