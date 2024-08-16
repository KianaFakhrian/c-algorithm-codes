#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int t ; cin >> t ;
    int num[1000] ;
    for(int i = 0 ; i < t ; i ++)
    {
        cin >> num[i] ;
        int r = num[i]/4 ;

        int m = (num[i]-(r*4)) ;
        if(m%2==0)
        {
            int res = m/2 + r ;
            cout << res << endl ;
        }
    }


    return 0;
}
