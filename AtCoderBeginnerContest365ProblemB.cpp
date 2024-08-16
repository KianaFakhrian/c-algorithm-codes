#include <iostream>
#include <list>
using namespace std;

int main()
{


    int n ; cin >> n ;
    list <long long> a ;
    long long N ;
    long long max = 0 ;
    int count = 0 ;
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> N ;
        a.push_back(N);

        if(N>max)
        {
            max=N ;
        }
    }
    list<long long >::iterator itr= a.begin() ;
    list<int> ind ;
    for(int i = 0 ; i < n ; i ++)
    {


//        cout << *itr << endl ;

        if(*itr == max)
        {
            count ++ ;
        }
        itr ++ ;
    }
//    cout << count << endl ;
    list<long long> tmp_a ;

    tmp_a = a;
    a.remove(max);
    max = 0;
    itr= a.begin() ;
    for(int i = 0 ; i < n - count; i ++)
    {

       if(*itr > max)
        {
           max = *itr ;

        }
        itr++ ;
    }
    itr = tmp_a.begin() ;
    for(int i = 0 ; i < n ; i ++)
    {
//        cout << *itr << endl ;
//        cout << max << endl ;
        if(*itr == max)
        {
            cout <<i + 1<< endl ;
            return 0 ;
        }
        itr++ ;
    }
    return 0;
}
