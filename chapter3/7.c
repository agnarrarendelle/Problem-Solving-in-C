#include <stdio.h>

void getNums(double * house, int * fuel, double * tax);
double calcuNums(double * house, int * fuel, double * tax);
void displayNums(double * nums);

int main(){
    int fuel;
    double tax, totalCost, house;

    getNums(&house, &fuel, &tax);
    totalCost = calcuNums(&house, &fuel, &tax);
    displayNums(&totalCost);
    return 0;
}

void getNums(double * house, int * fuel, double * tax){
    printf("Please enter initial house cost:");
    scanf(" %lf", house);
    printf("Please enter annual fuel cost:");
    scanf(" %d", fuel);
    printf("Please enter tax rate:");
    scanf(" %lf", tax);
//     printf(" %d %d %lf", *house, *fuel, *tax);
 }

 double calcuNums(double * house, int * fuel, double * tax){
    return ((*house + *fuel) * (*tax) * 5) + *house;
 }

 void displayNums(double * nums){
     printf("Total cost is %lf\n", *nums);
 }