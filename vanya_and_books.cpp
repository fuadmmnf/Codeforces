
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


    LL a=0,b,c=0,d,i,j,k=0,l=0,n,m=10,digit=0;
    char str[100000];
    cin>>n;

    while(true)
    {
        l++;
        if(n/m==0) break;
        else m*=10;
    }
    for(i=0;i<l;i++) str[i]='1';
    d=atoi(str);
    cout<<l*(n+1)-d<<endl;

	return 0;
}
