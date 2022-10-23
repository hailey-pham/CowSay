#include <iostream>
#include <string>
#include "Cow.h"
#include "Dragon.h"
#include "IceDragon.h"
#include "HeiferGenerator.h"

using namespace std;

int main(int argc, const char** argv)
{
    HeiferGenerator gen;

    string message;
    if(argv[1] == "-l")
    {
        //list out cows

        cout << "Cows Available: ";

        for(Cow* currentCow : gen.getCows())
        {
            cout << currentCow->getName() << " ";
        }
    }
    else if(argv[1] == "-n")
    {
        //assign next argument to message
        for (int i = 3; i < argc; i++)
        {
            message = argv[i];
            if (i < argc - 1)
            {
                cout << message;
            }
            else if (i = argc - 1)
            {
                cout << message << endl;
            }
        }
        // Creates a cow object and prints it
        Cow calledCow = Cow(argv[2]);

        cout << calledCow.getImage() << endl;

        // Checks if the dragon can breathe fire, prints result
        Dragon* testDragon = gen.getDragonPointer(&calledCow);
        if (testDragon != nullptr) {
            if (testDragon->canBreatheFire() == true) {
                cout << "This dragon can breathe fire." << endl;
            } else {
                cout << "This dragon cannot breathe fire." << endl;
            }
        }
    }
    else
    {
        for (int i = 1; i < argc; i++)
        {
            message = argv[i];
            cout << message;
        }
    }
}