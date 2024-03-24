#include <iostream>
#include<stdio.h>
#include <string>
using namespace std;

int main()
{
    char message[6]={ 'h', 'e', 'l', 'l', 'o' };
    char ch[]= {'h', 'e', 'l', 'l', 'o', '\0' };
    char ch1[6]={"world"} ;
    //char name[30];
    //cin>>name;
    //gets(name);
     string name;

    getline(cin, name);

    cout<<name<<endl;
    cout<<message<<endl;
    cout<<ch<<endl;
    cout<<ch1<<endl;

    return 0;
}
