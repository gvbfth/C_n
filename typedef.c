#include <stdio.h>

typedef struct
{
    int id, wiek;
    double Zarobki;
} Pracownik;

void wyświetlStatus(Pracownik pracwonik)
{
    printf("id: %d, wiek: %d, Zarobki: %.f \n", pracwonik.id, pracwonik.wiek, pracwonik.Zarobki);
}

int main()
{
    Pracownik Maciej, Marian;

    Maciej.id = 1;
    Marian.id = 2;
    Maciej.wiek = 21;
    Marian.wiek = 21;
    Maciej.Zarobki = 2000;
    Marian.Zarobki = 2000;

    wyświetlStatus(Maciej);
    wyświetlStatus(Marian);

    return 0;
}