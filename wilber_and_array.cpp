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


using namespace std;


int main()
{

    LL a=0,b,c,d,i,j,k,l,n,m,arr[200001],step=0;

    cin>>n;
    REP(i,0,n)
    {
        cin>>arr[i];
    }
    REP(i,0,n)
    {
        step+=abs(arr[i]-a);
        a=arr[i];
    }
    cout<<step<<endl;5






	return 0;
}
