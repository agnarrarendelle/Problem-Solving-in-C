#include <stdio.h>
#define SENTINEL -999

int main(){

    int temperature ,
        hot = 0,
        cold = 0,
        pleasant = 0,
        count = 0,
        average = 0;
    
        printf("Please enter the temperature:");
        scanf(" %d", &temperature);
        while (temperature != SENTINEL)
        {
            count++;
            average += temperature;
            if (temperature >= 85)
            {
                hot++;
            }
            else if (60 <= temperature && temperature <= 84)
            {
                pleasant++;
            }else
            {
                cold++;
            }

            printf("Please enter the next temperature:");
            scanf(" %d", &temperature);
        }
        
        printf("Hot days:%d\n", hot);
        printf("Cold days:%d\n", cold);
        printf("Pleasant days:%d\n", pleasant);
        printf("Average tempature:%d\n", average / count);

    return 0;
}