#ifndef SHIRTS_H
#define SHIRTS_H
#include "Clothes.h"
#include <string>
#include <iostream>
using namespace std;

class Shirts : public Clothes {

    public:
        // constructor
        Shirts();

        // Pre: user has selected shirts
        // Post: attribute has been applied to shirts
        void ChooseAttribute();
};

#endif // SHIRTS_H
