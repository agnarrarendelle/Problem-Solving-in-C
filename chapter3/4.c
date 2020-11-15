#include <stdio.h>
#include <math.h>

int getNum(int Num);
double calcuNum(double Num);
void displayNum(double result);

int main(){
    int Num;
    double result;
    printf("Please enter your number:");

    Num = getNum(Num);
    result = calcuNum(Num);
    displayNum(result);

}

int getNum(int Num){
    scanf(" %d", &Num);
    return Num;
}

double calcuNum(double Num){
    Num = (pow(Num, Num))*(exp(- Num))*(sqrt((2 * Num + 1 / 3) * M_PI));
    return Num;
}

void displayNum(double result){
    printf("Value is %.6lf\n", result);
}