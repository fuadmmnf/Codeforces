
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

	LL a,b,c,d=0,i,j,k=0,l=0,n,m,rightarr[100001],leftarr[100001],Min=9999999999999,Max=0,_count=0,sum=0,right=0,left=0;
    string str;


    cin>>n>>str;
    REP(i,0,n)
    {
        cin>>a;
        if(str[i]=='R')
        {
            c=a;
             right=1;
        }
        else if(right && str[i]=='L')
        {
            Min=min(Min,(a-c)/2);
            d=1;
            right=0;
            left=1;
        }

    }
    if(d && left)
    {
        cout<<Min<<endl;
    }
    else cout<<"-1"<<endl;
    r0;
}
