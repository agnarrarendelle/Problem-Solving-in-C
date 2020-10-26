#include <stdio.h>
#include <math.h>

int main(){

    float ppl;
    int oilToilet, newToilet, cost;

    printf("How many people?\n");
    scanf(" %f", &ppl);

    ppl = ceil(ppl / 3);
    oilToilet = ppl * 15 * 14;
    newToilet = ppl * 2 * 14;
    cost = ppl * 150;

    printf("Liters saved is %d and cost is %d\n", oilToilet - newToilet, cost);


    return 0;
}