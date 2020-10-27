#include <stdio.h>

int main(){

    float oneX, oneY;
    float twoX, twoY;
    float midX, midY;
    float slope, bisector, bisectorSlope, bisectorY;

    printf("Please enter X and Y of first coordinate:");
    scanf(" %f %f", &oneX, &oneY);
    printf("Please enter X and Y of second coordinate:");
    scanf(" %f %f", &twoX, &twoY);

    slope = (oneY - twoY) / (oneX - twoX);
    midX = (oneX + twoX) / 2;
    midY = (oneY + twoY) / 2;
    bisectorSlope = -1 / slope;
    bisectorY = midY - (bisectorSlope * midX);

    printf("The perpendicular bisector is y = %2.2fx + %2.2f\n", bisectorSlope, bisectorY);

    return 0;
}