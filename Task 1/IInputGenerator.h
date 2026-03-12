#ifndef IINPUT_GENERATOR_H
#define IINPUT_GENERATOR_H

class IInputGenerator {
public:
    virtual int Generate() = 0;
    virtual ~IInputGenerator() {}
};

#endif