#include <stdio.h>
#define MAX 500

int main(){

    double pi;
    int t = -1;
    for (int i = 1; i <= 99; i += 2)
    {
        t *= -1;
        pi = pi + (double) 1 / (t * i);
    }

    pi *= 4;
    
    printf("PI is now %lf\n", pi);

    return 0;
}