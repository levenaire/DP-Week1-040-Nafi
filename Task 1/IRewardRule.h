#ifndef IREWARD_RULE_H
#define IREWARD_RULE_H

class IRewardRule {
public:
    virtual int ComputeReward(int baseScore) = 0;
    virtual ~IRewardRule() {}
};

#endif