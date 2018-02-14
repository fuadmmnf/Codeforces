#include<bits/stdc++.h>
using namespace std;
#define LL long long
int main()
{
    int a=1,b,c,d,i,j,k,l,n=0,minute=0;
    char str[6];
    cin>>str;

    while((str[0]!=str[4]) || (str[1]!=str[3]))
    {

        if(str[4]=='9')
        {
            str[4]='0';
            if(str[3]=='5')
            {
                str[3]='0';
                if(str[1]=='9')
                {
                    str[1]='0';
                    str[0]++;
                }
                else if(str[1]=='3' && str[0]=='2')
                {
                    str[0]='0';
                    str[1]='0';
                }
                else str[1]++;
            }
            else str[3]++;
        }
        else str[4]++;
        n++;
    }
    cout<<n<<endl;
    return 0;

}

