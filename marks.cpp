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

    int a,b,c,d=0,i,j,k,l,n,m,num=0;
    char str[200][200];
    int best[200]={};

    cin>>n>>m;
    REP(i,0,n)
    {
        REP(j,0,m)
        {
            cin>>str[i][j];
            if(str[i][j]-'0'>best[j]) best[j]=str[i][j]-'0';
        }
    }

    REP(i,0,n)
    {
        REP(j,0,m)
        {
            if(str[i][j]-'0'==best[j])
            {
                num++;
                break;
            }
        }
    }


    cout<<num<<endl;

	return 0;
}
