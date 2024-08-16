#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int num ;
    cin >> num ;
    if(num%4 != 0)
    {
        cout << 365 << endl ;
        return 0 ;
    }
    if((num%4 ==0 && num%100 != 0) || num%400 == 0)
    {
        cout << 366 <<  endl ;
    }
    else if(num%100 == 0 && num%400 != 0)
    {
        cout << 365 << endl ;
    }
    return 0;
}
