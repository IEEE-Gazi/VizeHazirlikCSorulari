#include <stdio.h>

int main()
{
    int n, i;
    int sicakliklar[100];
    char* durum;
    char degisim;

    scanf_s("%d", &n);

    for (i = 0; i < n; ++i)
        scanf_s("%d", &sicakliklar[i]);

    for (i = 0; i < n; i++)
    {
        if (sicakliklar[i] < 10)
            durum = "Cold";
        
        else if (sicakliklar[i] >= 10 && sicakliklar[i] < 25)
            durum = "Warm";
        
        else // sicakliklar[i] >= 25
            durum = "Hot";
        
        if (i == 0)
            printf_s("%d %s =\n", sicakliklar[i], durum);

        else 
        {
            if (sicakliklar[i] < sicakliklar[i - 1])
                degisim = '-';
            else if (sicakliklar[i] > sicakliklar[i - 1])
                degisim = '+';
            else
                degisim = '=';

            printf_s("%d %s %c\n", sicakliklar[i], durum, degisim);
        }
    }
}
