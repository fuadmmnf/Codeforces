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

int dirrx[]={0,0,1,-1};
int dirry[]={1,-1,0,0};

int main()
{


    int a,b,c,d,i,j,k,l,n,m,even=0;
    char str[200][200];
    cin>>n;
    REP(i,0,n)
        REP(j,0,n)
            cin>>str[i][j];

    REP(i,0,n)
    {
        REP(j,0,n)
        {
            even=0;

            REP(k,0,4)
            {
                if((i+dirrx[k]>=0 && i+dirrx[k]<n) && (j+dirry[k]>=0 && j+dirry[k]<n))
                {
                    if(str[i+dirrx[k]][j+dirry[k]]=='o') even++;
                }
            }
            if(even%2==1)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }

    cout<<"YES"<<endl;

	return 0;
}
