
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


vector<pair<int,int> > leftside;

vector<pair<int,int> > rightside;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

    int a,b,c,d=0,e=0,r,f,s,i,j,k,l,n,m,Min=9999999999999,Max=0,_count=0,sum=0;
    cin>>n;
    REP(i,0,n)
    {
        cin>>a>>b;
        if(a<0) leftside.push_back(make_pair(a,b));
        else rightside.push_back(make_pair(a,b));
    }
    sort(leftside.begin(),leftside.end());
    reverse(leftside.begin(),leftside.end());
    sort(rightside.begin(), rightside.end());
    c=leftside.size();
    d=rightside.size();


    if(c==d)
    {
        l=c;
        r=d;
    }
    else if(c>d)
    {
        l=d+1;
        r=d;
    }
    else
    {
        l=c;
        r=c+1;
    }

    REP(i,0,l) sum+=leftside[i].second;
    REP(i,0,r) sum+=rightside[i].second;

    cout<<sum<<endl;
    r0;
}
