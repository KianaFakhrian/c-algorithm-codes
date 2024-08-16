#include <iostream>

using namespace std;

int main()
{
    int num ; cin >> num ;
    if(num <= 99 && num >= 1)
    {
        int res = 100 - num ;
        cout << res << endl;
    }else if(num <=199 && num >= 100)
    {
        int res = 200 - num ;
        cout << res << endl;
    }else if(num <= 299 && num >= 200)
    {
        int res = 300 - num ;
        cout << res << endl;
    }
    return 0;
}
