//
// Created by Kelly on 10/23/2022.
//

#include "Dragon.h"
#include <typeinfo>

//constructor
Dragon::Dragon(const string& _name, const string& _image) : Cow(_name)
{
    name = _name;
    this->setImage(_image);
}

//checks object type
bool Dragon::canBreatheFire()
{
    return true;
}
