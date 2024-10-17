#include <stdio.h>

int main()
{
    int I = 1, J = 7;
    
    while (I <= 9){
        printf ("I=%d J=%d\n", I, J);
        J = J - 1;
        if (J == 5){
            printf ("I=%d J=%d\n", I, J);
            I = I + 2;
            J = 7;
        } 
    }

    return 0;
}
