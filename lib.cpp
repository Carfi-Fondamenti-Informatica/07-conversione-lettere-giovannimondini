#include "lib.h"
bool funzione(char a,char &t)
{
    int b;
    b= (int) a;
    if(b<=122&&b>=97)
    {
        b=b-32;
        t= (char) b;
        return true;
    }
    else
    {
        if(b<=90&&b>=65)
        {
            b=b+32;
            t= (char) b;
            return true;
        }
        else
        {
            return false;
        }
    }

}
