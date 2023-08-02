#include<iostream>
using namespace std;

void copystr(char str[], char copy[])
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        copy[i] = str[i];
    }

    copy[i] = '\0';
}
 
int main()
{

    char str[] = "hello you";

    int len = 0;
    for(int i=0;str[i]!='\0';i++)
    {
        len++;
    }

    char copy[len];

    copystr(str,copy);

    cout<<"original str : "<<str<<endl;
    cout<<"copied str : "<<copy<<endl;

}