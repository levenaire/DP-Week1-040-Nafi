#ifndef SIMPLEREWARDRULE_H
#define SIMPLEREWARDRULE_H

#include "IRewardRule.h"

class SimpleRewardRule : public IRewardRule {
public:
    int ComputeReward(int baseScore) override {
        // Modification 2: reward is no longer equal to base score
        // Instead we add a bonus of +2

        int reward = baseScore + 2;
        return reward;
    }
};

#endif