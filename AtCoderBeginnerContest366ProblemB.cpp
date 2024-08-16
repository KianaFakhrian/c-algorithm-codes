#include <iostream>
#include <map>

using namespace std;

int main()
{
    long n ;
    cin >> n ;
    long sec = 0 ;
    map<int,int> Map;
    for(long i = 0 ; i < n ; i ++)
    {
        long first ; cin >>first ;
        if(first == 1)
        {
             cin >> sec ;
             Map[sec] ++ ;
        }
        else if(first == 2)
        {
           cin >> sec ;
           Map[sec] -- ;
           if(Map[sec] == 0)
           {
               Map.erase(sec) ;
           }
        }
        else
        {
            cout << Map.size() << endl;
        }
    }
    return 0;
}
