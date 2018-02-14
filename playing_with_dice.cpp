
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

    int a,b,c,d,i,j,awin=0,bwin=0,draw=0;
    cin>>a>>b;
    REP(i,1,7)
    {
        if(abs(i-a)>abs(i-b)) bwin++;
        else if(abs(i-a)<abs(i-b)) awin++;
        else draw++;
    }

    cout<<awin<<" "<<draw<<" "<<bwin<<endl;


	return 0;
}
