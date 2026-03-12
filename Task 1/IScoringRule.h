#ifndef ISCoringRule_H
#define ISCoringRule_H

class IScoringRule {
public:
    virtual int ComputeScore(int input) = 0;
    virtual ~IScoringRule() {}
};

#endif