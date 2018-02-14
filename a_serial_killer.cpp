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

#define setarr(arr,val) memset(arr,val,sizeof(arr));
#define pf() printf()
#define sf() scanf()
#define r0 return 0
#define Bigint __int128_t

*/
using namespace std;


/*
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
*/


vector< pair<string,string> > suspect;
vector<pair<string,string> >:: iterator it;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	LL a=1,b,c,d,i,j,k,l,n,m,arr[100001],Min=9999999999999,Max=0,_count=0,sum=0;
    string s1,s2;
    cin>>s1>>s2;
    suspect.push_back(make_pair(s1,s2));
     suspect.push_back(make_pair(s1,s2));
    cin>>n;
    REP(i,0,n)
    {
        cin>>s1>>s2;
        if(suspect[a].first==s1) suspect[a].first=s2;
        else suspect[a].second=s2;
        suspect.push_back(make_pair(suspect[a].first,suspect[a].second));
        a++;

    }
    for(it=suspect.begin(),i=0;it!=suspect.end() && i<a;it++,i++)
        cout<<(*it).first<<" "<<(*it).second<<endl;
    return 0;
}
