#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n;
    cin>>t;
   long long int a[1000001]={};
    a[1]=1;
    for(long long int i=2;i<1000001;i++)
    {
        a[i]=a[i-1]+i+a[i-1]*i;
        if(a[i]>1000000007)
        {
            a[i]%=1000000007;
        }
    }
    while(t--)
    {
        cin>>n;
        cout<<a[n]<<endl;
    }
    return 0;
}
