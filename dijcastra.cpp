#include<bits/stdc++.h>
#include<string>

typedef long long LL;
#define Vi vector<int>;
#define ii  pair<int, int>;
#define Vii vector<ii> ;
#define Si set<int> ;
#define MSi map<string, int> ;


#define REP(i,a,b)   for (int i =(int)a; i <int(b); i++)
#define TRvi(c, it) \
for (vi::iterator it = (c).begin(); it != (c).end(); it++)
#define TRvii(c, it) \
for (vii::iterator it = (c).begin(); it != (c).end(); it++)
#define TRmsi(c, it) \
for (msi::iterator it = (c).begin(); it != (c).end(); it++)

#define setarr(arr,val) memset(arr,val,sizeof(arr));


using namespace std;

pair<int,int> spair;

vector< spair > path;
int vertex[1000001];

int main()
{

    LL a,b,c,d,i,j,k,l,n,m,spath=10000000;
    cin>>n>>m;
    REP(i,1,n+1) vertex[i]=i;
    REP(i,0,m)
    {
        cin>>a>>b>>c;
        path[a].push_back(b,c);
        path[b].push_back(a,c);
    }



	return 0;
}
