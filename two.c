#include <stdio.h>

int NOD(int a, int b){
    while (a != b){
        if (a > b){
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}
int main(){
    int a, b;
    printf("Введите два числа: ");
    scanf("%d %d", &a, &b);
    printf("NOD = %d", NOD(a, b));
    return 0;
}