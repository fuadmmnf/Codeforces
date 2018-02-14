#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int a,b,c,d,i,j,n,m;
    int *min,*max;
    cin>>a;
    int arr[a];
    for(i=0;i<a;i++)
        cin>>arr[i];
    min=min_element(arr,arr+a);
    max=max_element(arr,arr+a);
    for(i=0;i<a;i++)
    {
        if(i==0) m=arr[i+1]-arr[i];
        else if(i==a-1) m=arr[i]-arr[i-1];
        else
        {
            if((arr[i+1]-arr[i])>(arr[i]-arr[i-1])) m=arr[i]-arr[i-1];
            else m=arr[i+1]-arr[i];
        }

        if((arr[i]-*min)>(*max-arr[i])) n=(arr[i]-*min);
        else n=*max-arr[i];

        cout<<m<<" "<<n<<endl;
    }
    return 0;
}
