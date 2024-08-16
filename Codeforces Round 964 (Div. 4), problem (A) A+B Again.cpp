#include <iostream>
using namespace std ;

int main()
{
    int t ; cin >> t ;
    int n[10000] ;
    int multiplier = 1 ;
    for(int i = 0 ; i < t ; i ++)
    {
        cin >> n[i] ;
        int sum = 0 ;
        while(n[i] != 0)
        {
            int r = n[i]%10 ;
            n[i]/=10 ;
            multiplier *= 10 ;
            sum += r ;


        }
        cout << sum << endl ;


    }

    return 0 ;
}
