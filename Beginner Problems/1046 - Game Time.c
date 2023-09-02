#include <stdio.h>

int main ()
{

    int comeco, fim, duracao;

    scanf ("%d %d", &comeco, &fim);

    if (comeco == fim)
    {
        printf ("O JOGO DUROU 24 HORA(S)\n");
    }

    else if (fim > comeco)
    {
        duracao = fim - comeco;
        printf ("O JOGO DUROU %d HORA(S)\n", duracao);
    }

    else
    {
        duracao = (24 - comeco) + fim;
        printf ("O JOGO DUROU %d HORA(S)\n", duracao);
    }

    return 0;
}
