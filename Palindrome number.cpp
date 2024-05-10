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
        sum = sum*10+r;
        temp = temp/10;
    }
    if(sum==num)
        cout<< "Plaindrome number"<<endl;
    else
        cout<< "Not Plaindrome number"<<endl;
return 0;
}
