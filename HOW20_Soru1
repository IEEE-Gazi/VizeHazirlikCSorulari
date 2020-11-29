#include <stdio.h>

int main()
{
    int sayi1, sayi2, sayi3;
    double ortalama;
    char durum;

    scanf_s("%d", &sayi1);
    scanf_s("%d", &sayi2);
    scanf_s("%d", &sayi3);

    ortalama = (sayi1 + sayi2 + sayi3) / 3.0;

    if (ortalama > sayi2)
        durum = 'B';
    else if (ortalama < sayi2)
        durum = 'K';
    else // ortalama == sayi2
        durum = 'E';

    printf_s("%d %c", (int)ortalama, durum);

    return 0;
}
