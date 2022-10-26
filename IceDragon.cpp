//
// Created by Kelly on 10/23/2022.
//

#include "IceDragon.h"

IceDragon::IceDragon(const std::string &_name, const std::string &_image) : Dragon(_name, _image)
{
    name = _name;
    this->setImage(_image);
}

bool IceDragon::canBreatheFire()
{
    return false;
}
