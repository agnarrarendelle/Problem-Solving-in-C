#include <stdio.h>

int main(){

    char loop = 'y';
    while (loop == 'y')
    {
        int M, N, side1, side2, hypotenuse;

        printf("Please enter two integers:");
        scanf(" %d %d", &M, &N);

        if(M < N){
            int temp = M;
            M = N;
            N = temp;
        } 

        side1 = (M * M) - (N * N);
        side2 = 2 * M * N;
        hypotenuse = (M * M) + (N * N);

        printf("side 1: %d, side 2: %d, hypotenuse: %d\n", side1, side2, hypotenuse);

        printf("Do you wish to continue?(y/n)\n");
        scanf(" %c", &loop);
        if(loop == 'Y' || loop == 'y'){
            loop = 'y';
        }else{
            loop = 'n';
            printf("Thank you\n");
        }
    }
    


    return 0;
}