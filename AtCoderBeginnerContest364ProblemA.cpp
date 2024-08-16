#include <iostream>

using namespace std;

int main()
{
    int n ;cin >> n ;
    string st[100] ;
    for(int i = 0 ; i < n ; i ++)

    {
        cin >> st[i] ;

    }
    int i = 0 ;
    for(i = 0 ; i < n ; i ++)
    {
        if(st[i] == "sweet" && st[i+1]=="sweet"&&i!=n-2)
        {
            cout << "No" << endl ;
            return 0 ;
        }

    }
    if(i==n)
    {
        cout << "Yes" << endl ;
    }
    return 0;
}
