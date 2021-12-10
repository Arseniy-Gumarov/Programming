#include <stdio.h>
#include <malloc.h>

int main()
{
  char arr[] = {'H','e','l','l','o'};
  char* ell;
  ell = arr;
  int n = sizeof(arr);
  for (int i = 0; i < n; i++) {
    printf("%c", ell[i]);
    printf(" ");
  }
  printf("\n");

  char* temp = (char*)malloc(n*sizeof(int));
  char* arrtemp = (char*)realloc(temp,5);

  for (int i = 0; i < n; i++) {
    temp[i] = ell[i];
  }

  for (int i = 0; i < n; i++) {
    printf("%c", temp[i]);
    printf(" ");
  }
  free(temp);
  return 0;
}