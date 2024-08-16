#include <iostream>
#include <map>
using namespace std;

int main()
{
    long t ; cin >> t ;

    for(int i = 0 ; i < t ; i ++)
    {
        long n ; cin >> n ;
        long s ; cin >> s ;
        long m ; cin >> m ;
        map<long,long> arr ;
        for(long j = 0 ; j < n ; j ++)
        {
            long f , s; cin >> f >> s;
            arr[f] = s ;
        }
        int counter = 0 ;
        int counter1 = 0 ;
        map<long ,long>::iterator itr=arr.begin();
        if(itr->first > s || itr->first == s)
        {

            counter ++ ;
        }
        for (map<long ,long>::iterator it=arr.begin(); it!=arr.end(); it++)
        {
            if(counter!=0)
                break ;
            if(counter1 == n-1)
            {
                if(m - it->second > s || m - it->second == s)
                {
                    counter ++ ;
                }
                break ;
            }
          map<long ,long>::iterator itr_tmp = it;
          itr_tmp ++ ;
          if((itr_tmp->first - it->second  == s || itr_tmp->first - it->second  > s))
              counter++ ;

          counter1 ++ ;
        }
        if(counter != 0)
            cout << "YES" << endl ;
        else
            cout << "NO" << endl ;

    }
    return 0;
}
