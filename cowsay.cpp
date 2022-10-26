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
    if (argc > 1) {
        message = argv[1];
    }

    if(message == "-l")
    {
        //lists out cows
        cout << "Cows available:";
        for(Cow* currentCow : gen.getCows())
        {
            cout << " " << currentCow->getName();
        }
        cout << endl << endl;
    }



    else if(message == "-n")
    {
        // if type of cow specified
        string cowName = argv[2];
        Cow calledCow = Cow(cowName);
        bool found = false;
        for(Cow* currentCow : gen.getCows())
        {
            if (currentCow->getName() == calledCow.getName()) //checks if the called cow is in the list
            {
                found = true;
                cout << endl;

                //prints message
                for (int i = 3; i < argc; i++)
                {
                    message = argv[i];
                    if (i < argc - 1)
                    {
                        cout << message << " ";
                    }
                    else if (i == argc - 1)
                    {
                        cout << message << endl;
                    }
                }

                //prints cow image
                cout << currentCow->getImage() << endl;

                //checks if dragon can breathe fire
                Dragon* testDragon = gen.getDragonPointer(currentCow);
                if(testDragon!= nullptr)
                {
                    if (testDragon->canBreatheFire()) {
                        cout << "This dragon can breathe fire.\n" << endl;
                    } else {
                        cout << "This dragon cannot breathe fire.\n" << endl;
                    }
                }
                break;
            }
        }
        if (!found)
        {
            cout << "Could not find " << calledCow.getName() << " cow!" << endl;
            cout << endl;
        }

    }
    else if (argc >= 2)
    {
        // if there's a message and no specified cow

        cout << endl;
        Cow calledCow = Cow("heifer");
        //prints message
        for (int i = 1; i < argc; i++)
        {
            message = argv[i];
            if (i < argc - 1)
            {
                cout << message << " ";
            }
            else if (i == argc - 1)
            {
                cout << message << endl;
            }
        }

        //prints default cow image
        for(Cow* currentCow : gen.getCows())
        {
            cout << currentCow->getImage() << endl;
            break;
        }
    }
}
