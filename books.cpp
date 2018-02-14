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
	LL a,b,c,d,i,j,k,l,n,m,mid,time,arr[100006],Min=9999999999999,Max=0,_count=0,sum=0,low=1,high;
    cin>>n>>time;
    high=n;
    arr[0]=0;
    REP(i,1,n+1)
    {
        cin>>arr[i];

    }
    sum=0;
    REP(i,1,n+1)
    {
        sum+=arr[i];
        _count++;
        while(time<sum)
        {
            _count--;
            sum-=arr[low++];
        }

        Max=max(_count,Max);
    }


    cout<<Max<<endl;
    return 0;
}
