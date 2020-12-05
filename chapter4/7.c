#include <stdio.h>

int isLeapYear(int year);//Check if it's a leap year
int YearCalc(int year, int month, int day);//Calculate the days

void yearCheck(int *year);//check valid year
void monthCheck(int *month);//check valid month
void dayCheck(int *day);//check valid day

int main(){

    int year, month, day, theDay;

    printf("Please enter year in number:");
    scanf(" %d", &year);
    yearCheck(&year);

    printf("Please enter month in number:");
    scanf(" %d", &month);
    monthCheck(&month);

    printf("Please enter day in number:");
    scanf(" %d", &day);
    dayCheck(&day);


    theDay = YearCalc(year, month,day);
    printf("The date is on the %d day of that year\n", theDay);

    return 0;
}

int isLeapYear(int year){
     return (((year % 100 != 0) && (year % 4 == 0)) || (year % 400 == 0));
}

int YearCalc(int year, int month, int day){
    int leapYear = isLeapYear(year);
    const int monthDays[2][13]={
        {0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334},//First 0 in each inner array is to offest the year
        {0, 0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335}
    };

    return monthDays[leapYear][month] + day;
}

void yearCheck(int *year){
    while (*year <= 0)
    {
        printf("Please enter valid year:");
        scanf(" %d", year);
    }
}

void monthCheck(int *month){
    while (*month <= 0 || *month > 12)
    {
        printf("Please enter valid month:");
        scanf(" %d", month);
    }
}

void dayCheck(int *day){
    while (*day <= 0 || *day > 31)
    {
        printf("Please enter valid day:");
        scanf(" %d", day);
    }
}
