#include <stdio.h>

void main(void)
{
    int n;
    int dd;

    scanf("%o", &n);
    scanf("%o", &dd);
    printf("%x\n", n);
    printf("%o << 4 ==%x\n", n, n<<4);

    printf("%o\n", ~n);
    printf("%o\n", n & dd);

}