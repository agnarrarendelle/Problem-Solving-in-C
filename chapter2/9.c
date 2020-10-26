#include <stdio.h>

int main(){

    double triangle, house, square;
    float triWidth, triLength, houseWidth, houseLength;

    printf("Please enter the width and length of the triangle:");
    scanf(" %f %f", &triWidth, &triLength);
    printf("Please enter the width and length of the house:");
    scanf(" %f %f", &houseWidth, &houseLength);

    while(((triLength * triWidth) / 2) < (houseWidth * houseLength )){
        printf("Invalid input, please enter again\n");

        printf("Please enter the width and length of the triangle:");
        scanf(" %f %f", &triWidth, &triLength);
        printf("Please enter the width and length of the house:");
        scanf(" %f %f", &houseWidth, &houseLength);
    }

    triangle = (triLength * triWidth) / 2;
    house = houseLength * houseWidth;
    square = (triangle - house) / 2;

    printf("It would take %5.1lfseconds to finish\n", square);

    return 0;
}