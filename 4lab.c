#include <stdio.h>

int main()
{
  int num = 0, arg = 0;
  scanf("%d", &num);
  arg = (23 < num) ? (num < 45) ? 1 : 0: 0;
  printf("%d\n", arg);
  printf("%d", (num >> 4) % 2);
  return 0;
}