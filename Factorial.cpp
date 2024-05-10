#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    unsigned long long  int f=1;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        f*=i;
    }
    cout<<f;
    return 0;
}
