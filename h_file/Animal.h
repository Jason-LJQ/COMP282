//
// Created by Jason on 2023-03-07.
//

#ifndef COMP282_ANIMAL_H
#define COMP282_ANIMAL_H

#include <string>

namespace Ani {
    class Animal {
    private:
        int weight;
        std::string name;
    public:
        void setWeight(int value);
        int getWeight(void);
    };
}


#endif //COMP282_ANIMAL_H
