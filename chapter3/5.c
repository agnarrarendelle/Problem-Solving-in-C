#include <stdio.h>
#include <math.h>

void getNum(double * Num);
void calcuNum(double * Num);
void displayNum(double * Num);

int main(){

    double Num;
    getNum(&Num);
    calcuNum(&Num);
    displayNum(&Num);
}

void getNum(double * Num){
    printf("Please enter your number:");
    scanf(" %lf", Num);
    // printf("Num is %lf", *Num);
}

void calcuNum(double * Num){

    *Num = ceil((*Num * 100));
}

void displayNum(double * Num){
    printf("Numer is %.0lf\n", *Num);
}