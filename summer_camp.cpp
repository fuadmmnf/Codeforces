#include<bits/stdc++.h>
#include<string>
#include<string.h>


typedef long long LL;


using namespace std;


int main()
{

    LL a=1,b,c=0,d=0,i,j=0,n,second=0,first=1,third=0;


    cin>>n;

    for(i=1; ; )
    {


          if(j>1)
          {


            if(i==n)
            {
                b=third;
                break;
            }
            i++;
        }





        if(j>0)
        {


            if(i==n)
            {
                b=second;
                break;
            }
            i++;
        }





        if(i==n)
        {
            b=first;
            break;
        }
        first++;
        if(first==10)
        {
            first=0;
            if(j==0) j=1;
            second++;
             if(second==10)
            {
                second=0;
                if(j==1) j=2;
                third++;
            }
        }
        i++;


    }
    cout<<b<<endl;
    return 0;
}



