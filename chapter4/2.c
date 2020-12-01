#include <stdio.h>
#include <math.h>

double BMIcalc(double height, double weight);
void BMIchoose(double BMI);
int main(){

    double height, weight, BMI;

    printf("Please enter height(in inch) and weight(in pound):");
    scanf(" %lf %lf", &height, &weight);

    BMI = BMIcalc(height, weight);
    BMIchoose(BMI);

    return 0;
}

double BMIcalc(double height, double weight){

    return (703 * weight) / pow(height, 2);
}

void BMIchoose(double BMI){

    if (BMI < 18.5)
    {
        printf("Underweight\n");
    }else if (18.5 <= BMI && BMI <= 24.9)
    {
        printf("Normal\n");
    }else if (25 <= BMI && BMI <= 29.9)
    {
        printf("Overweight\n");
    }else if (30 <= BMI)
    {
        printf("Obese\n");
    }
    
    
}