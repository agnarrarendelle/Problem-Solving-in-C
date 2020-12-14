#include <stdio.h>

int main(){

    int num, sum = 0, digit;
    printf("Please enter the number:");
    scanf(" %d", &num);

    while (num != 0)
    {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    if (sum % 9 == 0)
    {
        printf("DIVISIBLE\n");
    }else
    {
        printf("NONE DIVISIBLE\n");
    }
    
    return 0;
}