#include<bits/stdc++.h>
using namespace std;

#define LL long long
LL arr1[100005];
int main()
{
	std::ios_base::sync_with_stdio(false);

    LL a,b,c,d,i,j,k,l,n,arr[100005][2];
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>arr[i][0]>>arr[i][1];
        arr1[i]=arr[i][1]-arr[i][0];
    }


    a=*max_element(arr1,arr1+n);
    b=*min_element(arr1,arr1+n);
    if(a>b)
        cout<<"Happy Alex"<<endl;
    else cout<<"Poor Alex"<<endl;

    return 0;

}
