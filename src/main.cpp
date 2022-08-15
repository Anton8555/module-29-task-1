#include <iostream>
#include "dog.h"

int main() {
    // creating a dog object with the given name
    Talent* dog = new Dog("Steve");

    // list dog talents
    dog->show_talent();

    // deleting an object
    delete dog;

    return 0;
}
