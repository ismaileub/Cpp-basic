#include<iostream>
using namespace std;
int main()
{
    int i,j,num;
    cin>>num;

    for(i=1; i<=num; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout<<" "<<i;
        }
        cout<<endl;
    }
    return 0;
}
