
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
    LL a=0,b,c,d,i,j,k,l,n,m,arr[100001],Min=999999999,energy=0;
    cin>>n;
    cin>>arr[0];
    a=arr[0];
    REP(i,1,n)
    {
        cin>>arr[i];
        if(arr[i-1]-arr[i]>=0) energy+=arr[i-1]-arr[i];
        else
        {
            if(arr[i]-arr[i-1]<=energy) energy-=(arr[i]-arr[i-1]);
            else
            {
                a+=(arr[i]-arr[i-1]-energy);
                energy=0;
            }
        }

    }
    cout<<a<<endl;
    return 0;
}
