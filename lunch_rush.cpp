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

#define setbest(best,val) memset(best,val,sizeof(arr));


using namespace std;


int main()
{

    LL a,b,c,d=0,i,j,k,l,n,m,num=0,sum=0,joy=-999999999999;

    cin>>n>>k;

    REP(i,0,n)
    {
        cin>>a>>b;
        if(b<=k)
        {
            c=a;

        }
        else c=a-(b-k);
        if(c>joy) joy=c;
    }
    cout<<joy<<endl;


	return 0;
}


