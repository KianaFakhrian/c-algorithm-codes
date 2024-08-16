#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t ;cin>>t;
    int a[1000],b[1000] ;
    char arr[1000][1000] ;
    int Iarr[1000][1000] ;
    for(int i = 0 ; i < t ; i ++)
    {
        cin >> a[i] >>b[i] ;
        for(int j = 0 ; j < a[i] ; j ++)
        {
           for(int m = 0 ; m < a[i] ; m ++)
           {
               cin>>arr[j][m] ;
               Iarr[j][m] = arr[j][m]-48 ;
           }
        }

        for(int j = 0 ; j < a[i] ; j += b[i])
        {
            for(int m = 0 ; m < a[i] ; m += b[i])
            {
                cout << Iarr[j][m] ;
            }
            cout<<endl;

        }

    }

    return 0;
}
