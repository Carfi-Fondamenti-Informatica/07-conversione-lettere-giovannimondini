#include <iostream>
#include "lib.h"
using namespace std;



int main() {
    char n;
    char p;
    cin>>n;
    if (funzione(n,p))
    {
        cout<< p;
    }
    else
    {
        cout<<"errore";
    }

    return 0;
}
