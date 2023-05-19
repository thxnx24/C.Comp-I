#include <string>

#ifndef CREATE_H
#define CREATE_H

class CreateandDestroy
{
    public:
        CreateandDestroy(int , std::string);
        ~CreateandDestroy();
    private:
        int objectID;
        std::string message;
};

#endif