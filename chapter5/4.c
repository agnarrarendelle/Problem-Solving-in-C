#include <stdio.h>
#include <math.h>
void swap(double * a, double * b);

int main(){

    double smallest, largest, average, num, value, temp, sum, standard_deviation;

    printf("Please enter the how many numbers to compare:");
    scanf(" %lf", &num);
    
    printf("Please enter the first value:");
    scanf(" %lf", &value);

    smallest = value;
    largest = value;
    sum = value;

    for(int i = 0; i < num - 1; i++){
        printf("Please enter the next value:");
        scanf(" %lf", &temp);
        sum += temp;

        if (temp > largest)
        {
            swap(&temp, &largest);
        }
        else if(temp < smallest)
        {
            swap(&temp, &smallest);
        }
    }

    average = sum / num;
    standard_deviation = sqrt((pow(sum, 2) / num) - pow(average, 2));
    printf("Largest is %lf\n", largest);
    printf("Smallest is %lf\n", smallest);
    printf("Average is %lf\n", average);
    printf("Standard Deviation is %lf\n", standard_deviation);
    printf("Range is %lf\n", largest - smallest);
    
    
    



    return 0;
}

void swap(double * a, double * b){
    double temp = *a;
    *a = *b;
    *b = temp;
}