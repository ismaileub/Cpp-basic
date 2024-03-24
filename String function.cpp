#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char name1[]= "Ismail";
    char name2[]= " Hossain";
    char name3[10];

    int len= strlen(name1);
    cout<< "Length of string = "<<len<<endl;

    strcpy(name3, name1);
    cout<< "Name3 = "<<name3<<endl;

    strcat(name1 , name2);
    cout<<name1<<endl;

    strupr(name1);
    cout<<name1<<endl;

    strlwr(name1);
    cout<<name1<<endl;

      int value = strcmp(name1 , name2);

    if(value==0)
        cout<< "String are equal";

        else
            cout<< "String are not equal";



    return 0;
}

