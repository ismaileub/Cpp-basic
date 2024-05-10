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
        sum = sum+r*r*r;
        temp = temp/10;
    }
    if(sum==num)
        cout<< "Armstrong number"<<endl;
    else
        cout<< "Not Armstrong number"<<endl;
return 0;
}
