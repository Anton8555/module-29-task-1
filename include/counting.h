#pragma once

#include <iostream>
#include "talant.h"

class Counting: virtual public Talent {
public:
    virtual void show_talent() const;
};
