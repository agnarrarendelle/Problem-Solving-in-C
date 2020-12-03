#include <stdio.h>
#include <ctype.h>

void colorChoosing(char name);

int main(){

    char name;

    printf("Please enter the first character of the color:");
    scanf(" %c", &name);

    name = toupper(name);
    colorChoosing(name);

}

void colorChoosing(char name){

    switch (name)
    {
    case 'O':
        printf("orange\n");
        break;
    case 'B':
        printf("Brown\n");
        break;
    case 'Y':
        printf("yellow\n");
        break;
    case 'G':
        printf("Green\n");
        break;
    case 'A':
        printf("ammonia\n");
        break;
    case 'C':
        printf("carbon  monoxide \n");
        break;
    case 'H':
        printf("hydrogen\n");
        break;
    
    default:
        printf("Contens unknown\n");
        break;
    }
}