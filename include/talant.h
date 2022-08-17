#pragma once

class Talent {
public:
    virtual ~Talent() = default;
    virtual void show_talent() const = 0;
};