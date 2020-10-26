#include <stdio.h>
#define efficiency 0.65

int main(){
    
    char loop = 'y';

     while (loop == 'y')
     {
         
        float oil;
        double BTU;

        printf("Enter number of gallons of oil:");
        scanf(" %f", &oil);

        BTU = efficiency * (oil / 42) * 5800000;

        printf("BTU is %6.3lf\n", BTU);


        printf("Do you wish to continue?(y/n)");
        scanf(" %c", &loop);

        if(loop != 'y'){
         loop = 'n';
         printf("Thank you\n");
        }
     }
     


    return 0;
}