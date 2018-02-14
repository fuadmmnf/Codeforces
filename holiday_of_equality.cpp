#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,i,*b;
    cin>>a;
    int arr[a];
    for(i=0;i<a;i++)
        cin>>arr[i];
    b=max_element(arr,arr+a);
    int c=0;
    for(i=0;i<a;i++)
    {
        c+=*b-arr[i];
    }
    cout<<c;
    return 0;
}
