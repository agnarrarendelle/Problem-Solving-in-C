#include <stdio.h>
#define SENTINEL 2005

double fast_food_billions(int year);

int main(){

    double result;
    int year;

    

    printf("Please enter any year after 2005:");
    scanf(" %d", &year);

    while (year >= SENTINEL)
    {
        
        result = fast_food_billions(year); 
        printf("This year has %lf billions of fast food charges\n", result);

        printf("Please enter any year after 2005:");
        scanf(" %d", &year);
    }
    
    return 0;
}

double fast_food_billions(int year){
    double result;

    result = 33.2 + 16.8 * (year - SENTINEL);
    
    return result;
}