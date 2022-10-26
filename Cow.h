//
// Created by Kelly on 10/23/2022.
//

#ifndef UNTITLED3_COW_H
#define UNTITLED3_COW_H
#include <string>

using std::string;

class Cow
{
public:
    Cow(const string _name);
    string& getName();
    string& getImage();
    virtual void setImage(const string& _image);

private:
    string name;
    string image;
};

#endif //UNTITLED3_COW_H
