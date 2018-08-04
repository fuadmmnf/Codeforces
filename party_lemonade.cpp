
#include<bits/stdc++.h>

#define LL unsigned long long
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
LL amount[31];
LL cost[31];
LL Min=1000000000000000000;
void calculateMinCost(int n,LL L , LL sum,LL currentCost,int current)
{
    cout<<currentCost<<endl;
    if(currentCost>Min) return;
    if(sum>=L )
    {
        if(currentCost<Min)
            Min=currentCost;
        return ;
    }

    int m= min()

}



void calculateAmount()
{
    for(int i=1;i<31;i++)
    {
        LL l= 1<<i-1;

        amount[i]=l;
    }
}
int main()
{

//	LL a,b,c,d,e,f,s,i,j,k,l,n,m,arr[100001],Min=9999999999999,Max=0,_count=0,sum=0;
    int n;
    LL L;
    cin>>n>>L;
    calculateAmount();
    for(int i=1;i<=n;i++)
    {
        cin>>cost[i];
    }
    calculateMinCost(n,L,0,0,0);
    cout<<Min<<endl;
    return 0;
}
