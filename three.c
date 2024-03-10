#include <stdio.h>

int is_happy_number(int n)
{
    int sum, umn;
    while (n > 0)
    {   
        int c = n%10;
        n = n/10;
        sum = sum + c;
        umn = umn * c;
    }
        if ( sum == umn )
        {
            printf("YES");
        } 
        else printf("NO");
    return 0;
}
int main(){
    int n;
    printf("Введите  числo: \n");
    scanf("%d", &n);
    printf("%d", is_happy_number(n));
    return 0;
}