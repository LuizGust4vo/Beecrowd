# include <stdio.h>

int main () {

    int x[10000], y[10000], cont = 0;

    do {
        scanf ("%d %d", &x[cont], &y[cont]);
        cont++;
    } while (x[cont - 1] != 0 && y[cont - 1] != 0);

    for (int cont1 = 0; cont1 < cont; cont1++){
        if (x[cont1] > 0 && y[cont1] > 0){
            printf ("primeiro\n");
        }
        
        else if (x[cont1] < 0 && y[cont1] > 0){
            printf ("segundo\n");
        }

        else if (x[cont1] < 0 && y[cont1] < 0){
            printf ("terceiro\n");
        }

        else if (x[cont1] > 0 && y[cont1] < 0){
            printf ("quarto\n");
        }
    }

    return 0;
}