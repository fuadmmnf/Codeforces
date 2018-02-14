
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
	LL a,b,c,d,i,j,k,l,n,m,arr[100001],Min=9999999999999,Max=0,_count=0,sum=0,cons=0,inc=1,dec=0;
    cin>>n;
    REP(i,0,n)
    {
        cin>>arr[i];
    }
    REP(i,0,n-1)
    {
        if(arr[i]==arr[i+1]) cons=1;
        if(arr[i]==arr[i+1] && dec)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        if(arr[i]<arr[i+1])
        {
            if(dec || cons)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
        if(arr[i]>arr[i+1])
            dec=1;
    }
    cout<<"YES"<<endl;
    return 0;

}
