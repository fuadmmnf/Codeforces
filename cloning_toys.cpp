
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



LL combination(LL n, LL k) {
    if (k > n) {
        return 0;
    }
    unsigned long long r = 1;
    for (LL d = 1; d <= k; ++d) {
        r *= n--;
        r /= d;
    }
    return r;
}
*/





int main()
{
    LL a,b;
    bool poss=false;
    cin>>a>>b;
    if(b-a==1)
    {
        cout<<"Yes"<<endl;
        return 0;
    }
    if(a<=b)
    {
        cout<<"No"<<endl;
        return 0;
    }
    if(b==1 || b==0)
    {
        cout<<"No"<<endl;
        return 0;
    }
    b--;
    a-=b;
    if(a%2==0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
