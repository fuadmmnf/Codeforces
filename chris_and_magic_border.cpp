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

    LL a,b,c,d,i,j,k,l,n,m,arr[500][500],zero=0,sum,zerosum;
    cin>>n;
    REP(i,0,n)
    {
        sum=0;
        zero=0;
        REP(j,0,n)
        {
            cin>>arr[i][j];
            if(arr[i][j]==0) zero=1;
            sum+=arr[i][j];
        }
        if(zero) zerosum=sum;
        else b=sum;

    }
    cout<<b-zerosum<<endl;









	return 0;
}
