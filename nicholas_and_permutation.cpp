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

    int a,b,c,d,i,j,n,m,k,l,arr[200],posmin,posmax,maxdiff=0;
    cin>>n;
    REP(i,0,n)
    {
        cin>>arr[i];
        if(arr[i]==1) posmin=i;
        if(arr[i]==n) posmax=i;
    }


    REP(i,0,n)
    {
        if(i!=posmax)
        {
            if(abs(i-posmax)>maxdiff) maxdiff=abs(i-posmax);
        }
    }

     REP(i,0,n)
    {
        if(i!=posmin)
        {
            if(abs(i-posmin)>maxdiff) maxdiff=abs(i-posmin);
        }
    }

    cout<<maxdiff<<endl;




	return 0;
}
