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
#define TRvi(c, it) \
for (vi::iterator it = (c).begin(); it != (c).end(); it++)
#define TRvii(c, it) \
for (vii::iterator it = (c).begin(); it != (c).end(); it++)
#define TRmsi(c, it) \
for (msi::iterator it = (c).begin(); it != (c).end(); it++)

#define setarr(arr,val) memset(arr,val,sizeof(arr));

LL a,b,c,d,i,j,k,l,n,m,arr[100002];
bool fact[400001];



using namespace std;


void init()
{
    cin>>n;
    REP(i,0,n) cin>>arr[i];
}





int main()
{
    int chest=0,bisep=0,bac=0,a=1;

    init();
    for(i=0;i<n;i++)
    {
        chest+=arr[i];
        i++;
        if(i<n)
        bisep+=arr[i];
        i++;
        if(i<n)
        bac+=arr[i];
    }

    a=max(chest,bisep);
    a=max(a,bac);

    if(a==bac) cout<<"back"<<endl;
    else if(a==chest) cout<<"chest"<<endl;
    else cout<<"biceps"<<endl;
	return 0;
}
