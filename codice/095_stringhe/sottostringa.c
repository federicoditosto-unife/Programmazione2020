#include <stdio.h>
#define DIM 81

int main() {
  char s1[DIM], s2[DIM];
  int j, i;
  int trovato;

  scanf("%s%s", s1, s2);
  trovato = 0;
  j = 0;
  while (!trovato && s2[j] != '\0') {
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[j + i])
      i++;
    if (s1[i] == '\0')
      trovato = 1;
    j++;
  }
  if (trovato)
    printf("%s fa parte di %s\n", s1, s2);
  else
    printf("%s non fa parte di %s\n", s1, s2);
}