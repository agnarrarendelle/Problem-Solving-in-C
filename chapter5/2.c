#include <stdio.h>

int main(){

    int num, sum = 0;
    char digit;
    printf("Please enter the number:");
    scanf(" %d", &num);

    while (num != 0)
    {   
        sum += (num % 10);
        digit = (num % 10) + '0';
        printf("%c\n", digit);
        num /= 10;
    }
        printf("\n\nSum is %d\n", sum);
    

    return 0;
}