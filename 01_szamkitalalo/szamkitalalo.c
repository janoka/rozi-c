
#include <stdio.h>

int main()
{
  // Készíts egy számkitaláló programot!
  // A program kitalál véletlenszerűen egy pozitív egész számot (1 és 1000 között),
  // a felhasználó pedig addig tippel, amíg meg nem találja a keresett számot.
  // A program minden tipp után megmondja, hogy a felhasználó tippje kisebb vagy nagyobb a keresett értéknél.
  // Ha eltalálta, akkor pedig azt. Ilyenkor egyúttal be is fejeződik a program futása.
  // Forrás: https://infoc.eet.bme.hu/f03/#1
  szam = rand() % 1000 + 1;
  tipp = 0;
  while (tipp != szam)
  {
    printf("Tippelj egy számot: ");
    scanf("%d", &tipp);
    if (tipp < szam)
    {
      printf("A keresett szám nagyobb.\n");
    }
    else if (tipp > szam)
    {
      printf("A keresett szám kisebb.\n");
    }
    else
    {
      printf("Eltaláltad a számot!\n");
    }
  }
  return 0;
}
