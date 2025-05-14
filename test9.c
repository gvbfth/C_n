#include<stdio.h>

int main(){
    int a,j=1;
    scanf("%d", &a);

    while(a)
    {
        j*=(a--);
    }
    printf("%d", j);
    return 0;
}