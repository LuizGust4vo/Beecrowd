#include <stdio.h>

int main ()
{

    double salario, taxaT, s1, s2, t1, t2;

    scanf ("%lf", &salario);

    s1 = salario - 3000;
    s2 = salario - 4500;

    if (salario > 2000 && salario <= 3000)
    {
        taxaT = ((salario - 2000) / 100 * 8);
        printf ("R$ %.2lf\n", taxaT);
    }

    else if (salario > 3000 && salario <= 4500)
    {
        t1 = (s1 / 100) * 18;
        taxaT = 80 + t1;
        printf ("R$ %.2lf\n", taxaT);
    }

    else if (salario > 4500){
        t2 = (s2 / 100) * 28;
        taxaT = 270 + 80 + t2;
        printf ("R$ %.2lf\n", taxaT);
    }
    
    else {
        printf ("Isento\n");
    }

    return 0;
}
