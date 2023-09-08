#include <stdio.h>

int main ()
{

    double N[6];
    int pos = 0;

    for (int cont = 0; cont <= 5; cont++)
    {
        scanf ("%lf", &N[cont]);

        if (N[cont] > 0) pos++;
    }

    printf ("%d valores positivos\n", pos);


    return 0;
}
