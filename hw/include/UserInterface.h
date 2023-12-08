#pragma once
#include "PersonCollection.h"

class UserInterface {
public:
    UserInterface(PersonCollection& collection);
    void start();

private:
    PersonCollection& collection;
};
