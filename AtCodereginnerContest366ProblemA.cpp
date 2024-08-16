#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n,t,a ; cin >> n >>t>>a;
    int sum = t + a ;
    if(a<t)
    {
        if(n-sum+a>t)
            cout << "No" << endl ;
        else
        {
            cout << "Yes" << endl ;
        }

    }
    else if(a>t)
    {
        if(n - sum + t > a)
        {
            cout << "No" << endl ;
        }else
        {
            cout << "Yes" << endl ;
        }

    }
    else
    {
        if(n - sum + t > a || n-sum+a>t)
        {
            cout << "No" << endl ;
        }else
        {
            cout << "Yes" << endl ;
        }
    }

    return 0;
}
