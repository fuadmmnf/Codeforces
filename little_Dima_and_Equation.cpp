
#include<bits/stdc++.h>

typedef long long LL;
/*
#define vector<int> Vi;
#define pair<int, int> ii;
#define vector<ii> Vii;
#define set<int> Si;
#define map<string, int> MSi;

*/
#define REP(i,a,b)   for (int i =(int)a; i <int(b); i++)
/*
#define rREP(i,a,b) for(int i=(int a);i>b;i--)
#define TRvi(c, it) \
for (vi::iterator it = (c).begin(); it != (c).end(); it++)
#define TRvii(c, it) \
for (vii::iterator it = (c).begin(); it != (c).end(); it++)
#define TRmsi(c, it) \
for (msi::iterator it = (c).begin(); it != (c).end(); it++)
*/
#define setarr(arr,val) memset(arr,val,sizeof(arr));
#define pf() printf()
#define sf() scanf()
#define r0 return 0
#define Bigint __int128_t


using namespace std;


/*
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
*/



int main()
{

	LL a,e,f,g,h,b,c,d=0,i,j,k,l,n,m,arr[100001],Min=9999999999999,Max=0,_count=0,_count1=0,sum=1;
    cin>>a>>b>>c;
    REP(i,1,82)
    {
        sum=1;
        n=i;
        _count=0;
        _count1=0;

        REP(j,0,a) sum*=i;
        e=b*sum+c;
        f=e;
        while(f)
        {
            _count1+=(f%10);
            f/=10;
        }
        if(e>0 && e<1000000000 && _count1==i) arr[d++]=e;
    }
    cout<<d<<endl;
    REP(i,0,d) cout<<arr[i]<< " ";
    cout<<endl;
    r0;
}
