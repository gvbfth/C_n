#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    while(a>1)
    {
        
        printf("%d, ", a);
        a-=2;
    }
    printf("1");
    return 0;
}