#include "RunSession.h"
#include "RandomInputGenerator.h"
#include "SimpleScoringRule.h"
#include "SimpleRewardRule.h"

int main() {

    RandomInputGenerator generator;
    SimpleScoringRule scoring;
    SimpleRewardRule reward;

    RunSession run(&generator, &scoring, &reward);

    run.StartRun();

    return 0;
}