#include<iostream>
using namespace std;


void reverse(char str[],int len)
{
    int start = 0;
    int end = len-1;

    while(start<end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

void reversewords(char str[],int len)
{
    int start = 0;

    for(int i=0;i<=len;i++)
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            int end = i-1;

            while(start<end)
            {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--; 
            }

            start = i+1;
        }
    }
}

int main()
{
    char str[] = "this is string";
    int len = 0;
    for(int i=0;str[i]!='\0';i++)
    {
        len++;
    }

    cout<<"original str : "<<str<<endl;

    //reverse(str,len);
    reversewords(str,len);

    cout<<"reverce str : "<<str;
 

}

