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

    LL a,b,c,d,i,j,k,l,n,m,maxduff=1;
    cin>>n;
    REP(i,2,n/2+1)
    {
        if(n%i==0)
        {
            b=0;
            REP(j,2,ceil(sqrt(i))+1)
            {
                if(i%(j*j)==0)
                {
                    b=1;
                    break;
                }
            }
            if(!b && i>maxduff) maxduff=i;
        }
    }


      b=0;
            REP(j,2,ceil(sqrt(n))+1)
            {
                if(n%(j*j)==0)
                {
                    b=1;
                    break;
                }
            }
            if(!b && n>maxduff) maxduff=n;

cout<<maxduff<<endl;


	return 0;
}

