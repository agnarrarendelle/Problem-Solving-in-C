#include <stdio.h>
#define LEFT 1000000
#define G 9.80
#define offset 0.9
int main(){

    double height, cubic, GW;
    printf("What's the height?");
    scanf("%lf", &height);
    printf("What's the number of cubic?");
    scanf("%lf", &cubic);

    GW = LEFT * G * offset * height * (cubic * 1000);

    printf("It's %9.4lf", GW);
}