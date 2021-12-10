#include <stdio.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Ru");//задаем локаль для текущей функции
    char str1[256];//вводим строки
    char str2[256];
    char s;//вводим символ
    scanf(" %[^\n]s\n", str1);//считываем строки
    scanf(" %[^\n]s\n", str2);
    printf("\n");
    printf("First str: %s\n", str1);//отображаем строки
    printf("Second str: %s\n\n", str2);
    //Задание 3
    printf("Task 3\n");
    if (str1 == str2) printf("str1 = str2");
    else if (str1 < str2) printf("str1 < str2");
    else printf("str1 > str2");
    //Задание 6
    printf("Task 6\n");
    int n = 6;//количество заимствованных символов из одной из строк
    int k = 0;
    while (str1[k] != '\0') { k++; }
    for (int i = 0; i < n; i++)
    {
        str1[k++] = str2[i];
    }
    str1[k] = '\0';
    printf("str1 = %s\n\n", str1);
    //Задание 8
    printf("Task 8\n");
    {
        fflush(stdin);//сбрасывает в связанный с потоком данных файл данные, находящиеся в буфере
        printf("Put symbol: \n");//запрашиваем символ
        scanf("%c", &s);//считываем символ
        if(strchr(str1, s)==NULL)//проверяем, есть ли он в строчках
            printf("No");
        else
            printf( "Symbol is at position: %ld\n", (strchr(str1, s) - str1 + 1));
    }
    //Задание 10
    printf("Task 10\n");
    int f = 0;//вводим f=0
    for (int i = 0; str1[i] != '\0' && !f; i++)//анализируем первую строчку
    {
        for (int j = 0; str2[j] != '\0' && !f; j++)//анализируем вторую строчку
        {
            if (str1[i] == str2[j])//находим общий символ
            {
                printf("Character: %c\n\n", str1[i]);//выводим общий символ
                f = 1;
            }
        }
    }
    //Задание 12
    printf("Task 12\n");
    int length;//вводим длину
    length = strcspn(str1, str2);//выполняем поиск первого вхождения в строку любого из символов второй строки
    printf("Character where strings intersect is at position %d\n", length);//вывод
}