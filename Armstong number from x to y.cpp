<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,sum=0,temp,r;
    cout<<"Enter initial value:";
    cin>>x;
    cout<<"Enter final value:";
    cin>>y;
    for(int i=x; i<y; i++)
    {
        temp=i;
        while(temp!=0)
        {
            r=temp%10;
            sum = sum+r*r*r;
            temp = temp/10;
        }
        if(sum==i)
            cout<<i<<" ";
        sum=0;

    }


    return 0;
}

=======
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,sum=0,temp,r;
    cout<<"Enter initial value:";
    cin>>x;
    cout<<"Enter final value:";
    cin>>y;
    for(int i=x; i<y; i++)
    {
        temp=i;
        while(temp!=0)
        {
            r=temp%10;
            sum = sum+r*r*r;
            temp = temp/10;
        }
        if(sum==i)
            cout<<i<<" ";
        sum=0;

    }


    return 0;
}

>>>>>>> dd38d0516a39282e798ab9c8f2825b609fbe6e34
