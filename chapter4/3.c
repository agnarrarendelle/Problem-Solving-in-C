#include <stdio.h>
#include <stdlib.h>

void degreeToBearing(int degree, int degreeAfter);
int degreeCal(int degree);

int main(){

    int degree, degreeAfter;

    printf("Please enter your degree:");
    scanf(" %d", &degree);

    degreeAfter = degreeCal(degree);
    degreeToBearing(degree, degreeAfter);

    return 0;
}

void degreeToBearing(int degree, int degreeAfter){

    if (0 <= degree && degree < 90)
    {
        printf("North %d Degree East", degreeAfter);
    }else if(90 <= degree && degree < 180){
        printf("South %d Degree East", degreeAfter);
    }else if(180 <= degree && degree < 270){
        printf("South %d Degree West", degreeAfter);
    }else if((270 <= degree && degree < 360)|| degree == 360){
        printf("North %d Degree West", degreeAfter);
    }
    
}

int degreeCal(int degree){

    int degreeAfter;

    if(0 <= degree && degree < 90){
        degreeAfter = degree;
    }else if(90 <= degree && degree < 180){
        degreeAfter = 180 - degree;
    }else if(180 <= degree && degree < 270){
        degreeAfter = abs(180 - degree);
    }else if((270 <= degree && degree < 360) || degree == 360){
        degreeAfter = 360 - degree;
    }

    return degreeAfter;
}