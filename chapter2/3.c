#include <stdio.h>

int main(){
    char loop = 'y';

    while (loop == 'y')
    {
    int hour;
    float minute, time, temperature;

    printf("How many hour?");
    scanf(" %d", &hour);
    printf("How many minutes?");
    scanf(" %f", &minute);

    minute = minute / 60;
    time = hour + minute;
    temperature = ((4 * time * time) / (time + 2)) - 20;

    printf("T is %6.4f\n", temperature);

    printf("Do you want to enter again?");
    scanf(" %c", &loop);

    if(loop != 'y'){
        loop = 'n';
        printf("Thank you\n");
    }
    
    }
    

    return 0;
}