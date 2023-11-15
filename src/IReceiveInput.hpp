//
// Created by Mikko Ryynänen on 14.11.2023.
//

#ifndef SFML_PROJECT_IRECEIVEINPUT_HPP
#define SFML_PROJECT_IRECEIVEINPUT_HPP

#include "SFML/System/Vector2.hpp"

class IReceiveInput
{
public:
    virtual void receiveInput() = 0;

};

#endif //SFML_PROJECT_IRECEIVEINPUT_HPP
