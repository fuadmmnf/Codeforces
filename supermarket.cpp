
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



int main()
{
    LL a,n,k,b;
    double d,Min=1.0e9;

    cin>>n>>k;
    int store[n][2];
    for(int i=0;i<n;i++)
    {
        cin>>store[i][0]>>store[i][1];
        d=(store[i][0]*k)/(double)store[i][1];
        if(d<Min) Min=d;
    }
    cout<<fixed<<setprecision(8)<<Min<<endl;
    return 0;
}
