#include<iostream>
using namespace std;
int main()
{

    int i=1;
    ptint:
        cout<<i<<" ";
        i++;
    if(i<6)
    goto ptint;

    return 0;
}
