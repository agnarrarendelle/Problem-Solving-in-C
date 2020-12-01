#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double SQRT(int x);
double improve(double guess, int x);
double sqrIter(double guess, int x);
int goodEnough(double guess, int x);

int main(){
    int x;
    double root;
    printf("Enter x:");
    scanf(" %d", &x);

    root = SQRT(x);

    printf(" %.3lf\n", root);
   
}

double SQRT(int x){

    return sqrIter(1, x);
}

double improve(double guess, int x){
    return (guess + x / guess) / 2;
}

double sqrIter(double guess, int x){
    if(goodEnough(guess, x)){
        return guess;
    }else{
        sqrIter(improve(guess, x), x);
    }
}

int goodEnough(double guess, int x){
    return improve(guess, x) == guess;
}




