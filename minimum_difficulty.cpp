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
    LL a=9999999999999,b=0,c,d,i,j,k,l,n,m,arr[10001];
    cin>>n;
    REP(i,0,n)
    {
        cin>>arr[i];
    }
    REP(i,1,n-1)
    {
         b=0;
        REP(j,0,n)
        {

            if(j==i) continue;
            if(j+1==i )
            {
                if(j+2>=n) break;
                 if(arr[j+2]-arr[j]>b) b=arr[j+2]-arr[j];
            }

            if(arr[j+1]-arr[j]>b) b=arr[j+1]-arr[j];

        }
        if(b<a) a=b;
    }
    cout<<a<<endl;
    return 0;

}
