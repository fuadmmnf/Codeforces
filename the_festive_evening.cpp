
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

	LL a,b,c,d,i,j,k,l,n,m,Min=9999999999999,Max=0,_count=0,sum=0;
    int arr[26],free;
    bool done[26];
    string str;
    cin>>n>>a;
    cin>>str;
    free=a;
    setarr(arr,0);
    setarr(done,false);
    for(i=0;str[i];i++) arr[str[i]-'A']++;
    for(i=0;str[i];i++)
    {
        if(done[str[i]-'A']==false)
        {
            done[str[i]-'A']=true;
            if(free<=0)
            {
                cout<<"YES"<<endl;
                r0;
            }
            else
            {
                free--;
                arr[str[i]-'A']--;
                if(arr[str[i]-'A']==0) free++;
            }
        }
        else
        {
            arr[str[i]-'A']--;
            if(arr[str[i]-'A']==0) free++;
        }
    }
    cout<<"NO"<<endl;
    r0;
}
