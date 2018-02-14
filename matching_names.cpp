
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




vector <pair<int,int> > p;
vector < pair<int,int> >:: iterator it;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	LL a,b,c,d,i,j,k,l,n,m,arr[100001],Min=9999999999999,Max=0,_count=0,sum=0;
    string x[100001];
    string pseudo[100001];
    bool dis[100001];
    setarr(dis,false);
    cin>>n;
    REP(i,0,n) cin>>x[i];
    REP(i,0,n) cin>>pseudo[i];
    REP(i,0,n)
    {
        Max=0;
        a=x[i].size();
        REP(j,0,n)
        {
            _count=0;
            if(dis[j]==false)
            {
                b=pseudo[j].size();
                c=min(b,a);
                REP(k,0,c)
                {
                    if(x[i][k]==pseudo[j][k]) _count++;
                    else _count=0;
                    if(Max<=_count)
                    {
                        Max=_count;
                        d=j;
                    }
                }

            }
        }
        dis[d]=true;
        p.push_back(make_pair(i+1,d+1));
        sum+=Max;
    }
    cout<<sum<<endl;
    for(it=p.begin();it!=p.end();it++) cout<<(*it).first<<" "<<(*it).second<<endl;
    r0;
}
