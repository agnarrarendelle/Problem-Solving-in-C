#include <stdio.h>

int main(){

    int num1, num2;

    printf("Please enter number 1:");
    scanf(" %d", &num1);
    printf("Please enter number 2:");
    scanf(" %d", &num2);

    while (num1 != num2)
    {
        if (num1 > num2)
        {
            num1 -= num2;
        }else
        {
            num2 -= num1;
        }
    }
    printf("GCD is %d\n", num1);
    

}
