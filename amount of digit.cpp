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
