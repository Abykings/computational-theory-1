#include <stdio.h>
#include <stdlib.h>
int main()
{
    char cadena[1000], c, a;
    int unos = 0, ceros = 0, i = 0, j = 0, k = 0, l = 0, d = 0, m = 0;
    FILE *salida = fopen("sal.txt", "w");
    FILE *aceptada = fopen("pass.txt", "w");
    FILE *denegada = fopen("notpass.txt", "w");
    printf("Ingrese el numero de cadenas: ");
    scanf("%d", &d);
    printf("Seleccione la longitud de la cadena: ");
    scanf("%d", &m);
    while (l < d)
    {
        for (j = 0; j < m; j++)
        {
            k = (rand() % 2);
            if (k == 0)
            {
                c = *"0";
                a = *"";
            }
            if (k == 1)
            {
                c = *"1";
                a = *"";
            }
            if (c == "1" || c == "0")
            {
                fprintf(salida, "%c", c);
            }
            if (j == m - 1)
            {
                fprintf(salida, ",");
                a = *",";
            }
            if (c == *"1")
            {
                unos++;
                cadena[i] = *"1";
            }
            if (c == *"0")
            {
                ceros++;
                cadena[i] = *"0";
            }
            if ((unos % 2) == 0 && (ceros % 2) == 0 && a == *",")
            {
                for (i = 0; i < (ceros + unos); i++)
                {
                    fprintf(aceptada, "%c", cadena[i]);
                }
                fprintf(aceptada, ",");
            }
            else if (a == *",")
            {
                for (i = 0; i < (ceros + unos); i++)
                {
                    fprintf(denegada, "%c", cadena[i]);
                }
                fprintf(denegada, ",");
            }
            if (a == *",")
            {
                unos = 0;
                ceros = 0;
                i = -1;
            }
            i++;
        }
        l++;
    }
    fclose;
    return 0;
}