
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
  LL a,b,c,d,i,j,k,l,n,m,bark=0;
    cin>>a>>b>>n;
    c=b+a;
    d=a;
    if(a==n) bark=1;
    else
    {
        for( ; ; )
        {
            if(c==n || c+1==n)
            {
                bark=1;
                break;
            }
            c+=b;
            if(c>n) break;

        }
    }
    if(bark) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
