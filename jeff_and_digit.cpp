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
    LL a,b,c,d=0,i,j,k,l,n,m,zero=0,Max=0,five=0;
    int arr[1001];
    cin>>n;
    REP(i,0,n)
    {
        cin>>arr[i];
        if(arr[i]==5) five++;
        else zero++;
    }
    if(zero)
    {
        REP(i,0,(five/9)*9)
        {
            d=1;
            cout<<"5";
        }
        if(d)
        REP(i,0,zero) cout<<"0";
        else cout<<"0"<<endl;
        cout<<endl;
    }
    else cout<<"-1"<<endl;
    return 0;
}
