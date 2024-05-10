#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,sum=0,temp,r;
    cin>>num;
    temp=num;
    while(temp!=0)
    {
        r=temp%10;
        sum = sum+r;
        temp = temp/10;
    }
    cout<<"Sum of digits = "<<sum<<endl;
return 0;
}

