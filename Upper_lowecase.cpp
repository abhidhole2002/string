#include<iostream>
using namespace std;

void uppercase(char str[])
{
    for(int i=0;str[i]!='0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]-=32;
        }
    }
}

void lowercase(char str[])
{
    for(int i=0;str[i]!=0;i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] +=32;
        }
    }
}
 

void copied(char str[],char copy1[],char copy2[])
{
    int i = 0;
    for (; str[i] != '\0'; i++)
    {
        copy1[i] = str[i];
        copy2[i] = str[i];
    }

    copy1[i] = '\0';
    copy2[i] = '\0';
}

int main()
{
    char str[] = "This Is String ";

    char copy1[50];
    char copy2[50];

    copied(str, copy1, copy2);

    cout << "Original string: " << str << endl;
    cout << "Copy1: " << copy1 << endl;
    cout << "Copy2: " << copy2 << endl;

    uppercase(copy1);
    cout<<"upper case : "<<copy1<<endl;

    lowercase(copy2);
    cout<<"lowe case : "<<copy2<<endl;

}
