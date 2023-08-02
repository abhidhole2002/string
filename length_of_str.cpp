#include<iostream>
#include <cstring>
using namespace std;

int length(char str[],int size)
{
    int len = 0;

    for(int i=0;str[i]!='\0';i++)
    {
        len++;
    }

    return len;

}

int main()
{
    int size = 100;
    char str1[size];

    cout<<"enter string : ";
    cin.getline(str1,size);

    cout<<"String 1 : "<<str1<<endl;

    int len = 0;

    for(int i=0;i<=size;i++)
    {
        if(str1[i] == '\0')
        {
            break;
        }

        len++;
    }

    cout<<"Length of string is "<<len<<endl;
    cout<<"Length using function "<<length(str1,size)<<endl;
}