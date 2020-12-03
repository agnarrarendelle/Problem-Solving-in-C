#include <stdio.h>

void quadrantFinder (float X, float Y);

int main(){

    float X, Y;

    printf("Please enter X coordinate:");
    scanf(" %f", &X);
    printf("Please enter Y coordinate:");
    scanf(" %f", &Y);

    quadrantFinder(X, Y);


}

void quadrantFinder (float X, float Y){

    if (X == 0)
    {
        printf("(%f, %f) is on y-axis\n", X, Y);
    }else if (Y == 0)
    {
        printf("(%f, %f) is on x-axis\n", X, Y);
    }else if (X > 0)
    {
        if (Y > 0)
        {
        printf("(%f, %f) is in I\n", X, Y);
        }else
        {
        printf("(%f, %f) is in IIII\n", X, Y);
        }
    }else if(X < 0)
    {
        if (Y > 0)
        {
        printf("(%f, %f) is in II\n", X, Y);
        }else
        {
        printf("(%f, %f) is in III\n", X, Y);
        }
    }
    
}