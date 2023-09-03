#include <stdio.h>

int main ()
{

    int hI, mI, hF, mF, hD, mD;

    scanf ("%d %d %d %d", &hI, &mI, &hF, &mF);

    if (hI > hF)
    {
        if (mI > mF)
        {
            hD = ((24 - hI) + hF) - 1;
            mD = 60 - (mI - mF);
            printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hD, mD);
        }
        else if (mI < mF)
        {
            hD = (24 - hI) + hF;
            mD = mF - mI;
            printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hD, mD);
        }
        else
        {
            hD = (24 - hI) + hF;
            mD = mF - mI;
            printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hD, mD);
        }
    }

    else if (hI < hF)
    {
        if (mI > mF)
        {
            hD = hF - hI - 1;
            mD = 60 - (mI - mF);
            printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hD, mD);
        }
        else if (mI < mF)
        {
            hD = hF - hI;
            mD = mF - mI;
            printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hD, mD);
        }
        else
        {
            hD = hF - hI;
            mD = mF - mI;
            printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hD, mD);
        }
    }

    else
    {
        if (mI > mF)
        {
            hD = 24 - 1;
            mD = 60 - (mI - mF);
            printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hD, mD);
        }
        else if (mI < mF)
        {
            hD = hF - hI;
            mD = mF - mI;
            printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hD, mD);
        }
        else
        {
            printf ("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n", hD, mD);
        }
    }

    return 0;
}
