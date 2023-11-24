#ifndef PANTS_H
#define PANTS_H
#include <string>
#include <iostream>
using namespace std;

class Pants : public Clothes {

    public:
        // constructor
        Pants();

        // Pre: user has selected pants
        // Post: attribute has been applied to pants
        void ChooseAttribute();
};

#endif // PANTS_H
