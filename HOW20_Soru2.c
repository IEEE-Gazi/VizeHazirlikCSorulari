#include <stdio.h>

int main()
{
    int kardesSayisi, sekerSayisi;
    int asliSekerSayisi, kardesSekerSayisi;

    scanf_s("%d", &kardesSayisi);
    scanf_s("%d", &sekerSayisi);

    asliSekerSayisi = sekerSayisi % kardesSayisi;
    kardesSekerSayisi = (sekerSayisi - asliSekerSayisi) / kardesSayisi;

    printf_s("%d %d", asliSekerSayisi, kardesSekerSayisi);
}
