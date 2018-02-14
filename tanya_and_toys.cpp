#include<bits/stdc++.h>
#include<string>
#include<string.h>



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

vector < int > myvec;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	LL a,b,c,d,i,j,k,l,n,m,arr[100001],Min=9999999999999,Max=0,_count=0,sum=0;
    bool has[1000004];
    setarr(has,false)

    cin>>n>>k;
    REP(i,0,n)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    i=0;
    j=1;
    while(true)
    {
        if(j!=arr[i] && sum<=k)
        {
            _count++;
            myvec.push_back(j);
            sum+=j;
        }
        if(j==arr[i]) i++;
        if(sum>k)
        {

            _count--;
            break;
        }
        j++;
    }
    cout<<_count<<endl;
    REP(i,0,_count)  cout<<myvec[i]<<" ";
    cout<<endl;
    r0;

}
