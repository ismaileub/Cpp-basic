<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    int num, amount=0;

    cin>>num;
    do
    {
        num = num/10;
        ++amount;
    }
    while(num!=0);
    cout<<"Total number of digits "<<amount;

    return 0;
}
=======
#include<iostream>
using namespace std;
int main()
{
    int num, amount=0;

    cin>>num;
    do
    {
        num = num/10;
        ++amount;
    }
    while(num!=0);
    cout<<"Total number of digits "<<amount;

    return 0;
}
>>>>>>> dd38d0516a39282e798ab9c8f2825b609fbe6e34
