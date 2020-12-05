#include <stdio.h>

void displayPollutantType();
void pollutantTypeCheck(int *pollutantType);
void gramCheck(double *gramPerMile);
void odometerCheck(double *odometer);
int isGreaterThan50000(double odometer);
void pollutantTypeDetermination(int pollutantType, double gramPerMile, double odometer);
void carbonMonoxide(double gramPerMile, double odometer);
void hydrocarbons(double gramPerMile, double odometer);
void nitrogenOxides(double gramPerMile, double odometer);
void nonmethaneHydrocarbons(double gramPerMile, double odometer);
int main()
{

    int pollutantType;
    double gramPerMile, odometer;

    displayPollutantType();

    printf("Please enter pollutant number:");
    scanf(" %d", &pollutantType);
    pollutantTypeCheck(&pollutantType);

    printf("Please enter number of grams emitted per mile:");
    scanf(" %lf", &gramPerMile);
    gramCheck(&gramPerMile);

    printf("Please enter odometer reading:");
    scanf(" %lf", &odometer);
    odometerCheck(&odometer);

    pollutantTypeDetermination(pollutantType, gramPerMile, odometer);

    return 0;
}

void displayPollutantType()
{
    printf("(1) Carbon monoxide\n");
    printf("(2) Hydrocarbons \n");
    printf("(3) Nitrogen oxides\n");
    printf("(4) Nonmethane hydrocarbons\n");
}

void pollutantTypeCheck(int *pollutantType)
{
    while (!(1 <= *pollutantType && *pollutantType <= 4))
    {
        displayPollutantType();
        printf("Please enter valid number:");
        scanf(" %d", pollutantType);
    }
}

void gramCheck(double *gramPerMile)
{
    while (*gramPerMile < 0)
    {
        printf("Please enter valid number:");
        scanf(" %lf", gramPerMile);
    }
}

void odometerCheck(double *odometer)
{
    while (*odometer < 0)
    {
        printf("Please enter valid number:");
        scanf(" %lf", odometer);
    }
}

int isGreaterThan50000(double odometer)
{
    return (odometer <= 50000);
}

void pollutantTypeDetermination(int pollutantType, double gramPerMile, double odometer)
{
    switch (pollutantType)
    {
    case 1:
        carbonMonoxide(gramPerMile, odometer);
        break;
    case 2:
        hydrocarbons(gramPerMile, odometer);
        break;
    case 3:
        nitrogenOxides(gramPerMile, odometer);
        break;
    case 4:
        nonmethaneHydrocarbons(gramPerMile, odometer);
        break;
    }
}

void carbonMonoxide(double gramPerMile, double odometer)
{
    if (isGreaterThan50000(odometer))
    {
        if (gramPerMile >= 3.4)
        {
            printf("Emissions exceed permitted level of 3.4 grams/mile.\n");
        }
        else
        {
            printf("Emissions don't exceed permitted level of 3.4 grams/mile.\n");
        }
    }
    else
    {
        if (gramPerMile >= 4.2)
        {
            printf("Emissions exceed permitted level of 4.2 grams/mile.\n");
        }
        else
        {
            printf("Emissions don't exceed permitted level of 4.2 grams/mile.\n");
        }
    }
}
void hydrocarbons(double gramPerMile, double odometer)
{
    if (isGreaterThan50000(odometer))
    {
        if (gramPerMile >= 0.31)
        {
            printf("Emissions exceed permitted level of 0.31 grams/mile.\n");
        }
        else
        {
            printf("Emissions don't exceed permitted level of 0.31 grams/mile.\n");
        }
    }
    else
    {
        if (gramPerMile >= 0.39)
        {
            printf("Emissions exceed permitted level of 0.39 grams/mile.\n");
        }
        else
        {
            printf("Emissions don't exceed permitted level of 0.39 grams/mile.\n");
        }
    }
}
void nitrogenOxides(double gramPerMile, double odometer)
{
    if (isGreaterThan50000(odometer))
    {
        if (gramPerMile >= 0.4)
        {
            printf("Emissions exceed permitted level of 0.4 grams/mile.\n");
        }
        else
        {
            printf("Emissions don't exceed permitted level of 0.4 grams/mile.\n");
        }
    }
    else
    {
        if (gramPerMile >= 0.5)
        {
            printf("Emissions exceed permitted level of 0.5 grams/mile.\n");
        }
        else
        {
            printf("Emissions don't exceed permitted level of 0.5 grams/mile.\n");
        }
    }
}
void nonmethaneHydrocarbons(double gramPerMile, double odometer)
{
    if (isGreaterThan50000(odometer))
    {
        if (gramPerMile >= 0.25)
        {
            printf("Emissions exceed permitted level of 0.25 grams/mile.\n");
        }
        else
        {
            printf("Emissions don't exceed permitted level of 0.25 grams/mile.\n");
        }
    }
    else
    {
        if (gramPerMile >= 0.31)
        {
            printf("Emissions exceed permitted level of 0.31 grams/mile.\n");
        }
        else
        {
            printf("Emissions don't exceed permitted level of 0.31 grams/mile.\n");
        }
    }
}