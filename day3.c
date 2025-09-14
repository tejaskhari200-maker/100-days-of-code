#include <stdio.h>

int main() {
    int c , f;

    printf("enter temp in celsius");
    scanf("%d",&c);
    f= (c*9/5)+32;
    printf("temp in fahrenheit is %d" , f);
    

    return 0;
}