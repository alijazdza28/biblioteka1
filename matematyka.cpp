int zliczInwersje(int* tab, int n)
{
  int inwersji = 0;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (tab[i] > tab[j]) {
        inwersji++;
      }
    }
  }
  return inwersji;
}

int potega(int a, int n)
{
  if (n == 0)
    return 1;
  int suma = a;
  int czynnik = a;
  for (int i = 1; i < n; i++) {
    for (int j = 1; j < a; j++) {
      czynnik += suma;
    }
    suma = czynnik;
  }
  return czynnik;
}

char* najmniejszaWyczerpujaca(int b)
{
  char* liczba = new char[b + 1];
  liczba[0] = '1';
  liczba[1] = '0';
  for (int i = 2; i < b; i++)
    liczba[i] = '0' + i;
  liczba[b] = '\0';
  return liczba;
}


