#include <stdio.h>

int seed (int count, int i, int n)
{
    while (i < n)
    {
        count = count * 2 ;
        i++;
    }
    return count;
}

int main()
{
    int count = 1;
    int i = 1;
    int n;
    printf("Введите номер клетки\n");
    scanf("%d", &n);
    printf("Количество зерен на данной клетке = %d\n", seed (count, i, n));
    return 0;
}