#include<cstring>
#include<algorithm>
#include<cstdio>
#include<vector>
#define pb push_back
using namespace std;
const int N = 301010;
int n,i,a[N];
int main(){
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    sort(a+1,a+1+n);
    for (i=1;i<n-1;i++)
    if (a[i]+a[i+1]>a[i+2]){
        printf("YES\n");
        return 0;
    }
    printf("NO");
}
