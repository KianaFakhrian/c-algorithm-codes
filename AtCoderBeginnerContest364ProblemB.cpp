#include <iostream>

using namespace std;

int main()
{
    int h,w;cin >>h>>w;
    int s1,s2;cin>>s1>>s2;
    char arr[50][50] ;
    string s ;
    for(int i = 0 ; i < h ; i++)
        for(int j = 0 ; j < w ; j ++)
        {
            cin >> arr[i][j] ;
        }
    cin >> s ;
    s1--;
    s2--;
    int len = s.length();
    for(int i = 0 ; i < len ; i ++)
    {
        if(s[i]=='L' && s2-1<w && s2-1>=0 && arr[s1][s2-1]=='.')
        {
            s2-- ;

        }else if(s[i]=='R'&&s2+1<w&&s2+1>=0 && arr[s1][s2+1]=='.')
        {
            s2++;
        }else if(s[i]=='U' && s1-1<h&&s1-1>=0&&arr[s1-1][s2]=='.')
        {
            s1--;
        }else if(s[i]=='D'&&s1+1<h&&s1+1>=0&&arr[s1+1][s2]=='.')
        {
            s1++;
        }
    }
    cout << s1+1 << " " << s2+1 << endl ;
    return 0;
}
