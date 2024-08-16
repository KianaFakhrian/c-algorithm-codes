#include <iostream>

using namespace std;

int main()
{
    int N,T,P;cin >> N>> T>> P ;
    int* x = new int[N] ;
    int cnt = 0 ;
    for(int i = 0 ; i < N ; i++)
    {
        cin >> x[i] ;
        if(x[i] == T || x[i] > T)
            cnt ++ ;
    }
    if(cnt == P || cnt > P)
    {
        cout << 0 << endl ;
        return 0 ;
    }
    int tmp;
    for(int i = 0 ; i < N - 1; i ++)
    {
        for(int j = 0 ; j < N - 1 - i; j ++)
        {
            if(x[j] < x [j + 1])
            {
                tmp = x[j] ;
                x[j] = x[j+1];
                x[j+1] = tmp ;
            }
        }
    }

    cout << T - x[P - 1] << endl ;
    return 0;
}
