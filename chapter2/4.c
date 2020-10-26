#include <stdio.h>

int main(){

    int fah;
    double cel;

    printf("What's the fahrenheit?");
    scanf(" %d", &fah);

    cel = ((double) 5 / 9) * (fah - 32);

    printf("Temperature is %6.3lf", cel);

    return 0;
}