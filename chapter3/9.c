#include <stdio.h>
#include <math.h>
void getNums(double * baseRadius, double * height, double * cost, double * number);
void calcuNums(double * baseRadius, double * height, double * cost, double * number, double * totalCost);
void displayNums(double * cost, double * totalCost);
int main(){
    double baseRadius, height, cost, number, totalCost;
    getNums(&baseRadius, &height, &cost, &number);
    calcuNums(&baseRadius, &height, &cost, &number, &totalCost);
    displayNums(&cost, &totalCost);
    return 0;

}

void getNums(double * baseRadius, double * height, double * cost, double * number){
   printf("Please enter base radius and height:");
   scanf(" %lf %lf", baseRadius, height);
   printf("Please enter cost per square centimeter and number to be produced:"); 
   scanf(" %lf %lf", cost, number);
}

void calcuNums(double * baseRadius, double * height, double * cost, double * number, double * totalCost){
    double bottom, around, allSurface;
    bottom = pow(*baseRadius, 2) * M_PI;
    around =  (*baseRadius * 2 * M_PI) * *height;
    allSurface = bottom + around;
    *cost = allSurface * *cost;
    *totalCost = ((int) *cost) * *number;
}

void displayNums(double * cost, double * totalCost){
    printf("Cost per container is %d\n", (int) *cost);
    printf("Total cost is %.0lf\n", *totalCost);
}
