#include<bits/stdc++.h>

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
	ios::sync_with_stdio(0);
	cin.tie(0);

	int min1,min2,min3,max1,max2,max3,a,b,c,d,i,j,k,l,n,m,arr[100001],Min=9999999999999,Max=0,_count=0,sum=0;
    cin>>n>>min1>>max1>>min2>>max2>>min3>>max3;
    a=min1;
    b=min2;
    c=min3;
    sum=a+b+c;

    d=n-sum;
    if(d>=max1-min1)
    {
        a+=max1-min1;
        d-=(max1-min1);
    }
    else
    {
        a+=d;
        d-=d;
    }

    if(d>=max2-min2)
    {
        b+=max2-min2;
        d-=(max2-min2);
    }
    else
    {
        b+=d;
        d-=d;
    }


    if(d>=max3-min3)
    {
        c+=max3-min3;
        d-=(max3-min3);
    }
    else
    {
        c+=d;
        d-=d;
    }
    cout<<a<<" "<<b<<" "<<c<<endl;
    r0;
}
