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

    LL a,b,c,d,i,j,k,l,n,m,x,y,initx,inity,step=0;


    cin>>n>>m>>initx>>inity>>k;

    REP(i,0,k)
    {
        cin>>x>>y;

        if(x>0) a=(n-initx)/abs(x);
        else if(x<0) a=(initx-1)/abs(x);
        else    a=999999999;


          if(y>0) b=(m-inity)/abs(y);
        else if(y<0) b=(inity-1)/abs(y);
        else b=9999999999999;
        c=min(a,b);
        initx+=c*x; inity+=c*y;

        step+=c;

    }
    cout<<step<<endl;
	return 0;
}

