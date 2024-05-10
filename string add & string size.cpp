#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1 = "Ismail";
    string str2= " Hossain";
    string str3;

    str3= str1;

    cout<< "Str3 = "<<str3<<endl;

    str3= str1+ str2;

    cout<< "Str1+ Str2 = "<<str3<<endl;

    int length = str1.size();

    cout<< "Size of str1 = "<<length;




    return 0;
}
