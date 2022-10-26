//
// Created by Kelly on 10/23/2022.
//

#ifndef UNTITLED3_DRAGON_H
#define UNTITLED3_DRAGON_H
#include "Cow.h"


class Dragon : public Cow
{
public:
    //methods
    Dragon(const string& _name, const string& _image);
    virtual bool canBreatheFire();

private:
    //attributes
    string name;
    string image;
};

#endif //UNTITLED3_DRAGON_H
