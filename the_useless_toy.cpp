
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

	LL a,b,c,d,i,j,k,l,n,m,arr[100001],Min=9999999999999,Max=0,_count=0,sum=0;
    char ch1,ch2;
    cin>>ch1>>ch2>>n;
    if(ch1=='v') a=0;
    else if(ch1=='<') a=1;
    else if(ch1=='^') a=2;
    else a=3;

     if(ch2=='v') b=0;
    else if(ch2=='<') b=1;
    else if(ch2=='^') b=2;
    else b=3;

    if(((a+n%4)%4==b && (b+n%4)%4==a ) || ((a+n%4)%4!=b && (b+n%4)%4!=a)) cout<<"undefined"<<endl;
    else if((a+n%4)%4==b) cout<<"cw"<<endl;
    else if((b+n%4)%4==a) cout<<"ccw"<<endl;


}
