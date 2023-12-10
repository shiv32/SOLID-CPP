/*
 class should have only one reason to change
*/

#include <iostream>

/*
//violate SRP

class NOTES
{
public:
void ADD(){};
void REMOVE(){};
void EDIT(){};
void DISPLAY(){};
};
*/


class NOTES
{
public:
void ADD(){};
void REMOVE(){};
void EDIT(){};
};

class VIEW
{
public:
void DISPLAY(NOTES *np){};
};


int main()
{


    return 0;
}