#include "RunSession.h"
#include "FixedInputGenerator.h"
#include "SimpleScoringRule.h"
#include "SimpleRewardRule.h"

int main() {

    FixedInputGenerator generator;
    SimpleScoringRule scoring;
    SimpleRewardRule reward;

    RunSession run(&generator, &scoring, &reward);

    run.StartRun();

    return 0;
}