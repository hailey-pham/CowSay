#include "Cow.h"

// constructors
Cow::Cow(const std::string _name)
{
    name = _name;
    image = "";
}

// getters
string& Cow::getName()
{
    return name;
}

string& Cow::getImage()
{
    return image;
}

// setters
void Cow::setImage(const string& _image)
{
    image = _image;
}



