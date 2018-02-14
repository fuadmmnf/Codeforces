#include<bits/stdc++.h>
#include<string>
#include<string.h>



typedef long long LL;
#define vector<int> Vi;
#define pair<int, int> ii;
#define vector<ii> Vii;
#define set<int> Si;
#define map<string, int> MSi;


#define REP(i,a,b)   for (int i =(int)a; i <int(b); i++)

#define rREP(i,a,b) for(int i=(int a);i>b;i--)
#define TRvi(c, it) \
for (vi::iterator it = (c).begin(); it != (c).end(); it++)
#define TRvii(c, it) \
for (vii::iterator it = (c).begin(); it != (c).end(); it++)
#define TRmsi(c, it) \
for (msi::iterator it = (c).begin(); it != (c).end(); it++)

#define setarr(arr,val) memset(arr,val,sizeof(arr));

using namespace std;

int main()
{
    int a,b=1,c,d,i,j,k,l,n,num=0;

    cin>>n;
    char str[n][n];

    REP(i,0,n)
    {
        REP(j,0,n)
        {
            str[i][j]='.';
        }
    }

    REP(i,0,n)
    {
        b=1-b;
        REP(j,b,n)
        {
            str[i][j]='C';
            num++;
            j++;
        }
    }
    cout<<num<<endl;
      REP(i,0,n)
    {
        REP(j,0,n)
        {
           cout<<str[i][j];
        }
        cout<<endl;
    }

    return 0;

}
