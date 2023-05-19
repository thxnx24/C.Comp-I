#include <iostream>
#include "CreateandDestroy.h"

using namespace std;

CreateandDestroy::CreateandDestroy(int ID, string messageString)
    :objectID{ID}, message{messageString}
    {
        cout << "Object " << objectID << " constructor runs " << message << endl;   
    }

CreateandDestroy::~CreateandDestroy()
{
    cout << (objectID == 1 || objectID == 6 ? "\n" : "");

    cout << "Object " << objectID << " destructor runs " <<  message << endl;
}

void create();

CreateandDestroy first{1, "(global before main)"};

int main() 
{
    cout << "\nMAIN FUNCTION: EXECUTION BEGINS" << endl;
    CreateandDestroy second{2, "(local in main)"}; 
    static CreateandDestroy third{3, "(local static in main)"};

    create();

    cout << "\nMAIN FUNCTION: EXECUTION RESUMES" << endl;
    CreateandDestroy fourth{4, "(local in main)"};
    cout << "\nMAIN FUNCTION: EXECUTION ENDS" << endl;
}

void create() 
{
    cout << "\nCREATE FUNCTION: EXECUTION BEGINS" << endl;
    CreateandDestroy fifth{5, "(local in create)"};
    static CreateandDestroy sixth{6, "(local static in create)"};
    CreateandDestroy seventh{7, "(local in create)"};
    cout << "\nCREATE FUNCTION: EXECUTION ENDS" << endl;

}