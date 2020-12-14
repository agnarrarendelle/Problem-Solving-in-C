#include <stdio.h>
#define SENTINEL -99

int main(){

    int idenNum, numHour, count = 0, answer;
    double wageRate, wagePer, wageOver40, sum = 0, average = 0;

    do
    {
        wagePer = 0;
        wageOver40 = 0;

        printf("Please enter the identification number:");
        scanf(" %d", &idenNum);
        printf("Please enter the hourly wage rate:");
        scanf(" %lf", &wageRate);
        printf("Please enter the number of hours worked:");
        scanf(" %d", &numHour);

        if (numHour <= 40)
        {
            wagePer += numHour * wageRate;
        }
        else
        {
            wageOver40 = numHour - 40;
            wagePer = (numHour * wageRate) + (wageOver40 * numHour * 1.5); 
        }
        
        wagePer = wagePer + wagePer * 0.03625;
        sum += wagePer;
        count++;

        printf("Employee %d's total wage is %.2lf", idenNum, wagePer);

        printf("\n\nDo you wish to coutinue?(enter -99 to quit and any other number to continue):");
        scanf(" %d", &answer);
    } while (answer != SENTINEL);

    average = sum / count;

    printf("Sum is %.3lf\n", sum);
    printf("Average salary is %.2lf\n", average);
    

    return 0;
}