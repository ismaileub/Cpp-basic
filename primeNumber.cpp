<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    int num,i,isPrime=0;
    cin>>num;
    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            isPrime++;
            break;
        }
    }
    if(isPrime==0)
        cout<<"Prime Number";
    else
        cout<<"Not Prime Number";
        cout<<isPrime;

    return 0;
}
=======
#include<iostream>
using namespace std;
int main()
{
    int num,i,isPrime=0;
    cin>>num;
    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            isPrime++;
            break;
        }
    }
    if(isPrime==0)
        cout<<"Prime Number";
    else
        cout<<"Not Prime Number";
        cout<<isPrime;

    return 0;
}
>>>>>>> dd38d0516a39282e798ab9c8f2825b609fbe6e34
