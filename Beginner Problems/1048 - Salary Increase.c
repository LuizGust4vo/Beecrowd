#include <stdio.h>

int main ()
{

    double salario, aumento, novoSalario;

    scanf ("%lf", &salario);

    if (salario >= 0 && salario <= 400)
    {
        aumento = (salario / 100) * 15;
        novoSalario = salario + aumento;

        printf ("Novo salario: %.2lf\n", novoSalario);
        printf ("Reajuste ganho: %.2lf\n", aumento);
        printf ("Em percentual: 15 %%\n");
    }

    else if (salario > 400 && salario <= 800)
    {
        aumento = (salario / 100) * 12;
        novoSalario = salario + aumento;

        printf ("Novo salario: %.2lf\n", novoSalario);
        printf ("Reajuste ganho: %.2lf\n", aumento);
        printf ("Em percentual: 12 %%\n");
    }

    else if (salario > 800 && salario <= 1200)
    {
        aumento = (salario / 100) * 10;
        novoSalario = salario + aumento;

        printf ("Novo salario: %.2lf\n", novoSalario);
        printf ("Reajuste ganho: %.2lf\n", aumento);
        printf ("Em percentual: 10 %%\n");
    }

    else if (salario > 1200 && salario <= 2000)
    {
        aumento = (salario / 100) * 7;
        novoSalario = salario + aumento;

        printf ("Novo salario: %.2lf\n", novoSalario);
        printf ("Reajuste ganho: %.2lf\n", aumento);
        printf ("Em percentual: 7 %%\n");
    }

    else if (salario > 2000)
    {
        aumento = (salario / 100) * 4;
        novoSalario = salario + aumento;

        printf ("Novo salario: %.2lf\n", novoSalario);
        printf ("Reajuste ganho: %.2lf\n", aumento);
        printf ("Em percentual: 4 %%\n");
    }

    return 0;
}
