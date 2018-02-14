
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
#define pf() printf()
#define sf() scanf()
#define r0 return 0
#define Bigint __int128_t


using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	LL i1=0,i2=0,i3=0,a,neg=0,b,c,d,i,j,k,l,n,m,arr[100001],Min=9999999999999,Max=0,_count=0,sum=0,n1[100],n2[100],n3[100];
    cin>>n;
    REP(i,0,n)
    {
        cin>>a;
        if(a==0)
        {
            n3[i3++]=0;
        }
        else if(a>0) n2[i2++]=a;
        else arr[_count++]=a;
    }
    j=0;
    if(_count%2==1)
    {
        REP(i,0,_count/2)
        {
            n2[i2++]=arr[j++];
            n2[i2++]=arr[j++];
        }
        n1[i1++]=arr[j++];
    }
    else
    {
         REP(i,0,_count/2-1)
        {
            n2[i2++]=arr[j++];
            n2[i2++]=arr[j++];
        }
        n1[i1++]=arr[j++];
        n3[i3++]=arr[j++];
    }
    cout<<i1<<" ";
    REP(i,0,i1) cout<<n1[i]<<" ";
    cout<<endl;


    cout<<i2<<" ";
    REP(i,0,i2) cout<<n2[i]<<" ";
    cout<<endl;

    cout<<i3<<" ";
    REP(i,0,i3) cout<<n3[i]<<" ";
    cout<<endl;


    r0;

}
