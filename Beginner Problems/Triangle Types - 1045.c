#include <stdio.h>

int main ()
{

    double A, B, C, auxB, auxC;

    scanf ("%lf", &A);
    scanf ("%lf", &B);
    scanf ("%lf", &C);

    if (B >= A && B >= C)
    {
        auxB = A;
        A = B;
        B = auxB;
    }
    else if (C >= A && C >= B)
    {
        auxC = A;
        A = C;
        C = auxC;
    }
    else
    {
        A = A;
    }

    if (A >= (B + C))
    {
        printf ("NAO FORMA TRIANGULO\n");
    }

    else
    {
        if ((A * A) == (B * B) + (C * C)) printf ("TRIANGULO RETANGULO\n");
        if (A * A > B * B + C * C) printf ("TRIANGULO OBTUSANGULO\n");
        if ((A * A) < (B * B) + (C * C)) printf ("TRIANGULO ACUTANGULO\n");

        if (A == B && B == C)
        {
            printf ("TRIANGULO EQUILATERO\n");
        }
        else if (A == B || B == C || A == C)
        {
            printf ("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
