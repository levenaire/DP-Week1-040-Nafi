#ifndef SIMPLE_REWARD_RULE_H
#define SIMPLE_REWARD_RULE_H

#include "IRewardRule.h"

class SimpleRewardRule : public IRewardRule {
public:
    int ComputeReward(int baseScore) override {
        return baseScore;
    }
};

#endif