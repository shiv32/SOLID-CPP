/*
 Software Components (such as classes, modules, function, etc) should be open for extension but close for modifications.
*/

#include <iostream>

/*
//violate OCP

class NOTES
{
public:
void ADD()
{
//    if(contain('#'))
//    {


//    }

};
void REMOVE(){};
void EDIT(){};
};
*/

class NOTES
{
public:
    virtual void ADD()
    {

    };
    void REMOVE(){};
    void EDIT(){};
};

{
public:
    void DISPLAY(NOTES * np){};
};
class SPECIALNOTES : public NOTES
{
public:
    void ADD() override
    {
        //    if(contain('#'))
        //    {

        //    }
    }
};

int main()
{

    return 0;
}