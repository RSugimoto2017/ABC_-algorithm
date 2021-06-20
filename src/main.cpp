#include <iostream>
#include "FlowerSet.h"

int main()
{
    int i;
    FlowerSet *fSet;

    srand((unsigned int)time(NULL));

    char fname[] = "sampledata.csv";
    fSet = new FlowerSet(fname);
    for (i = 1; i <= REPEAT_NUM; i++)
    {
        fSet->employedBeePhase();
        fSet->onlookerBeePhase();
        fSet->scoutBeePhase();
        fSet->saveBestPos();
        printf("%d回目：最良評価値%f\n", i, fSet->bestValue);
    }
    fSet->printResult();
    delete fSet;

    return 0;
}