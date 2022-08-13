#pragma once

#include <iostream>
#include <vector>
#include "talant.h"
#include "swimming.h"
#include "dancing.h"
#include "counting.h"

class Dog: virtual public Swimming, virtual public Dancing, virtual public Counting {
    std::string name;  // dog's name
    std::vector<Talent*> listTalent;  // skill list

public:
    Dog(std::string inName);

    virtual void show_talent();
};