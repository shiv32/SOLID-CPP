#include <iostream>

/*
//breaking ISP
class IFILE
{
    virtual void READ() = 0;
    virtual void WRITE() = 0;
    virtual ~IFILE() = default;
};
*/

//follow ISP

class IREAD
{
    virtual void READ() = 0;
    virtual ~IREAD() = default;
};

class IWRITE
{
    virtual void WRITE() = 0;
    virtual ~IWRITE() = default;
};


int main()
{

    return 0;
}