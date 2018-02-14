
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

#define rREP(i,a,b) for(int i=(int a);i>b;i--)
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
    LL a,b,c,d,i,j,k,n,m,arr[10001],l=0,r,sereja=0,drek=0;
    cin>>n;
    r=n-1;
    REP(i,0,n)
        cin>>arr[i];

    REP(i,0,n)
    {
        if(arr[l]>=arr[r])
        {
            a=arr[l];
            l++;
        }
        else
        {
            a=arr[r];
            r--;
        }
        if(i%2==0)
        {
            sereja+=a;
        }
        else drek+=a;
    }






    cout<<sereja<<" "<<drek<<endl;
    return 0;
}
