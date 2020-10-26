#include <stdio.h>

int main(){

    char grade;
    float mini, current, score;
    float percentage;

    printf("Enter desired grade: ");
    scanf(" %c", &grade);
    printf("Enter minimum average required:");
    scanf(" %f", &mini);
    printf("Enter current average in course:");
    scanf(" %f", &current);
    printf("Enter percentage:");
    scanf(" %f", &percentage);

    percentage = 100 / percentage;

    score = (mini * percentage) - (current * (percentage - 1));

    printf("You need at least %4.3f to get to %c\n", score, grade);
    return 0;
}