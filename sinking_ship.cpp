

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


bool gone[1000];
vector <pair<string,string> > mypair;
vector <pair<string,string> >::iterator it;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	LL a,b,c,d,i,j,k,l,n,m,arr[100001],Min=9999999999999,Max=0,_count=0,sum=0;
    setarr(gone,false);
    string s1,s2;
    cin>>n;
    REP(i,0,n)
    {
        cin>>s1>>s2;
        mypair.push_back(make_pair(s1,s2));
    }

    for(i=0,it=mypair.begin();it!=mypair.end();it++,i++)
    {
        if(gone[i]==false && (*it).second=="rat")
        {
            gone[i]=true;
            cout<<(*it).first<<endl;
        }
    }

    for(i=0,it=mypair.begin();it!=mypair.end();it++,i++)
    {
        if(gone[i]==false && ((*it).second=="woman" || (*it).second=="child"))
        {
            gone[i]=true;
            cout<<(*it).first<<endl;
        }
    }
        for(i=0,it=mypair.begin();it!=mypair.end();it++,i++)
    {
        if(gone[i]==false && (*it).second=="man")
        {
            gone[i]=true;
            cout<<(*it).first<<endl;
        }
    }

        for(i=0,it=mypair.begin();it!=mypair.end();it++,i++)
    {
        if(gone[i]==false && (*it).second=="captain")
        {
            gone[i]=true;
            cout<<(*it).first<<endl;
        }
    }
    r0;
}
