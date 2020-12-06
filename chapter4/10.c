#include <stdio.h>
#include <ctype.h>

void WhiteSweetChoosing(char *orWhiteSweet);
void DoubleOrNot(char *isDouble);
void ManualOrNot(char *isManual);
double bakingTimeCalc(char orWhiteSweet, char isDouble, char isManual);
double whiteBread(char isDouble, char isManual);
double sweetBread(char isDouble, char isManual);
void timeCal(double *time, double baking, char isDouble);
void manualProcess(char isManual);

int main(){

    char orWhiteSweet ,isDouble, isManual;
    double time;

    WhiteSweetChoosing(&orWhiteSweet);
    DoubleOrNot(&isDouble);
    ManualOrNot(&isManual);

    time = bakingTimeCalc(orWhiteSweet, isDouble, isManual);
    printf("The total time is %lf minutes", time);

    return 0;
}

void WhiteSweetChoosing(char *orWhiteSweet){
    printf("Please enter your bread type\n");
    printf("W for white and S for sweet:");
    scanf(" %c", orWhiteSweet);
    *orWhiteSweet = toupper(*orWhiteSweet);

    while(*orWhiteSweet != 'S' && *orWhiteSweet != 'W'){
        printf("Please enter valid character\n");
        printf("W for white and S for sweet:");
        scanf(" %c", orWhiteSweet);
        *orWhiteSweet = toupper(*orWhiteSweet); 
    }

}

void DoubleOrNot(char *isDouble){
    printf("Please tell us if your bread is double(Y/N):");
    scanf(" %c", isDouble);
    *isDouble = toupper(*isDouble);

    while (*isDouble != 'Y' && *isDouble != 'N')
    {
        printf("Please enter valid cahracter(Y/N):");
        scanf(" %c", isDouble);
        *isDouble = toupper(*isDouble);
    }
}

void ManualOrNot(char *isManual){
    printf("Please tell us if your bread is manual(Y/N):");
    scanf(" %c", isManual);
    *isManual = toupper(*isManual);

    while (*isManual != 'Y' && *isManual != 'N')
    {
        printf("Please enter valid cahracter(Y/N):");
        scanf(" %c", isManual);
        *isManual = toupper(*isManual);
    }

}

double bakingTimeCalc(char orWhiteSweet, char isDouble, char isManual){
    double time;

    if (orWhiteSweet == 'W')
    {
        time = whiteBread(isDouble, isManual);
    }else if(orWhiteSweet == 'Y'){
        time = sweetBread(isDouble, isManual);
    }
    
    return time;
}

double whiteBread(char isDouble, char isManual){
    double time = 218;
    double baking = 45;
    timeCal(&time, baking, isDouble);
    manualProcess(isManual);
    return time;

}
double sweetBread(char isDouble, char isManual){
    double time = 248;
    double baking = 35;
    timeCal(&time, baking, isDouble);
    manualProcess(isManual);
    return time;
}

void timeCal(double *time, double baking, char isDouble){
    if(isDouble == 'Y'){
        *time = *time + baking + baking * 0.5;
    }else
    {
        *time = *time + baking;
    }
}

void manualProcess(char isManual){
    char PressOrNot;
    if (isManual == 'Y')
    {
        printf("Please wait for 2 seconds and press Y:");
        scanf(" %c", &PressOrNot);

        while (PressOrNot != 'Y' && PressOrNot != 'y')
        {
            printf("Please enter Y:");
            scanf(" %c", &PressOrNot);
        }
    }
}