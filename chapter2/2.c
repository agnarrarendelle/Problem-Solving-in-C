#include <stdio.h>
#define LEFT 1000000
#define G 9.80
#define offset 0.9
int main(){
    char loop = 'y';

    while(loop == 'y'){

    double height, cubic, GW;
    printf("What's the height?");
    scanf(" %lf", &height);
    printf("What's the number of cubic?");
    scanf(" %lf", &cubic);

    GW = LEFT * G * offset * height * (cubic * 1000);

    printf("It's %9.4lf\n", GW);

    printf("Do you want to enter again?(y/n)");
    scanf(" %c", &loop);

    if(loop != 'y'){
        loop = 'n';
        printf("Thanks for your participation\n");
    }
    }
}