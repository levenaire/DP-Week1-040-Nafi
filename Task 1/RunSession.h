#ifndef RUN_SESSION_H
#define RUN_SESSION_H

#include "IInputGenerator.h"
#include "IScoringRule.h"
#include "IRewardRule.h"
#include "ShopSystem.h"

class RunSession {
public:
    RunSession(IInputGenerator* generator,
               IScoringRule* scoring,
               IRewardRule* reward);

    void StartRun();

private:
    IInputGenerator* generator_;
    IScoringRule* scoring_;
    IRewardRule* reward_;
    ShopSystem shop_;

    int money_;
};

#endif