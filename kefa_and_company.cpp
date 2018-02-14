#include<bits/stdc++.h>

typedef long long LL;


#define REP(i,a,b)   for (int i =(int)a; i <int(b); i++)

#define rREP(i,a,b) for(int i=(int a);i>b;i--)
#define TRvi(c, it) \
for (vi::iterator it = (c).begin(); it != (c).end(); it++)
#define TRvii(c, it) \
for (vii::iterator it = (c).begin(); it != (c).end(); it++)
#define TRmsi(c, it) \
for (msi::iterator it = (c).begin(); it != (c).end(); it++)

#define setarr(arr,val) memset(arr,val,sizeof(arr));
#define pf() printf()
#define sf() scanf()
#define r0 return 0
#define Bigint __int128_t


using namespace std;

vector < pair<int, int> > mypair;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);


	LL a,b,c,d,i,j,k,l,n,m,arr[100001],Min=9999999999999,Max=0,_count=0,sum=0,low,high,mid;
    cin>>n>>k;
    arr[0]=0;
    REP(i,0,n)
    {
        cin>>a>>b;

        mypair.push_back(make_pair(a,b));
    }
    sort(mypair.begin(),mypair.end());
    REP(i,0,n)
    {
        sum+=mypair[i].second;
        arr[i+1]=sum;
    }
    sum=0;

    REP(i,0,n)
    {
        low=i;
        high=n-1;
        b=0;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(mypair[mid].first-mypair[i].first>=k)
            {
                high=mid-1;
            }
            else
            {
                sum=max(sum,arr[mid+1]-arr[i]);
                low=mid+1;

            }

        }

    }
    cout<<sum<<endl;
    r0;
}
