#include <stdio.h>
#include <ctype.h>
#define SENTINEL -99
double getRecord(void);

int main(){

    int playerNum;
    double average;

    printf("Please enter the number of the player:");
    scanf(" %d", &playerNum);

    while (playerNum != SENTINEL)
    {
        average = getRecord();
        printf("Player %d's average is %lf\n", playerNum, average);

        printf("Please enter the number of the next player:");
        scanf(" %d", &playerNum);
    }

    return 0;
}

double getRecord(void){
    char playReco;
    double divide1 = 0, divide2 = 0;
    printf("Please enter the first record of the player:");
    scanf(" %c", &playReco);

    playReco = toupper(playReco);

    while (playReco != 'Q')
    {
        if(playReco == 'H'){
            divide1++;
        }

        if (playReco == 'O' || playReco == 'H' || playReco == 'P')
        {
            divide2++;
        }
        printf("Please enter the next record of the player:");
        scanf(" %c", &playReco);
        playReco = toupper(playReco);
    }

    return divide1 /  divide2;
}