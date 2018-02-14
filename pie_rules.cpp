#include<bits/stdc++.h>

typedef long long LL;
/*
#define vector<int> Vi;
#define pair<int, int> ii;
#define vector<ii> Vii;
#define set<int> Si;
#define map<string, int> MSi;

*/
#define REP(i,a,b)   for (int i =(int)a; i <int(b); i++)
/*
#define rREP(i,a,b) for(int i=(int a);i>b;i--)
#define TRvi(c, it) \
for (vi::iterator it = (c).begin(); it != (c).end(); it++)
#define TRvii(c, it) \
for (vii::iterator it = (c).begin(); it != (c).end(); it++)
#define TRmsi(c, it) \
for (msi::iterator it = (c).begin(); it != (c).end(); it++)
*/
#define setarr(arr,val) memset(arr,val,sizeof(arr));
#define pf() printf()
#define sf() scanf()
#define r0 return 0
#define Bigint __int128_t


using namespace std;


/*
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
*/

/*
template <class ForwardIterator>
  bool is_sorted (ForwardIterator first, ForwardIterator last)
{
  if (first==last) return true;
  ForwardIterator next = first;
  while (++next!=last) {
    if (*next<*first)     // or, if (comp(*next,*first)) for version (2)
      return false;
    ++first;
  }
  return true;
}
*/


/*
bool prime[100001];
void SieveOfEratosthenes(int n)
{


    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
}

*/
int Max1=0,Max2=0,arr[100001],n,diff=1000000000,best[60][3];

int pie(int person,int serial,int sum1,int sum2)
{

    if(best[serial][person]!=-1) return best[serial][person];
    if(serial==n)
    {
        if(abs(sum1-sum2)<diff)
        {
            Max1=sum1;
            Max2=sum2;
            diff=abs(sum1-sum2);
        }
        return diff;
    }


      for(int i=0;i<2;i++)
    {
        if(i==0)
        {
           int b=pie(person,serial+1,sum1,sum2+arr[serial]);
          /* if(b!=-10)*/  best[serial][i]=b;
        }
        else
        {
            int b=pie(1-person,serial+1,sum1+arr[serial],sum2);
           /* if(b!=-10)*/ best[serial][i]=b;
        }
        if(serial<n-1) best[serial][i]=best[serial+1][i];
    }
    return -10;
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	LL a,b,c,d,e,f,s,i,j,k,l,m,Min=9999999999999,Max=0,_count=0,sum=0;
    cin>>n;
    setarr(best,-1);
    REP(i,0,n)
        cin>>arr[i];
    pie(1,0,sum,_count);
    cout<<Max1<<" "<<Max2<<endl;
    return 0;

}
