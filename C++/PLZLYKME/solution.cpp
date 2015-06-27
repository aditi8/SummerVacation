#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    long long int l,d,s,c;
    while(t--)
    {
        cin>>l>>d>>s>>c;
        for(int i=2;i<=d;i++)
        {
            s=s*(c+1);
            if(s>=l)
                break;
        }
        if(s>=l)
            cout<<"ALIVE AND KICKING\n";
        else
            cout<<"DEAD AND ROTTING\n";
    }
    return 0;
}
