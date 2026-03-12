#ifndef FIXED_INPUT_GENERATOR_H
#define FIXED_INPUT_GENERATOR_H

#include "IInputGenerator.h"

class FixedInputGenerator : public IInputGenerator {
public:
    int Generate() override {
        return 3;
    }
};

#endif