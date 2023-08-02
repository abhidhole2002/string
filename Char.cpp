#include<iostream>
using namespace std;
 
int main()
{
    char ch;
    cout<<"enter character : ";
    cin>>ch;

    cout<<"character  = "<<ch;

    
    //ch++;
    ch--;

    cout<<"character  = "<<ch;

    char upper = toupper(ch);
    char lower = tolower(ch);

    cout<<"\nUpper case : "<<upper<<endl;
    cout<<"lower case : "<<lower<<endl;

    if(isdigit(ch))
        cout<<"digit "<<endl;
    else
        cout<<"not digit"<<endl;

    cout<<"is char digit ? "<<(isdigit(ch) ? "YES" : "NO")<<endl;
    cout<<"is char alpha ? "<<(isalpha(ch) ? "YES" : "NO")<<endl;
    cout<<"is char space ? "<<(isspace(ch) ? "YES" : "NO")<<endl;
 
    //conver char to ascii
    // ascii value to char

    int asciival = static_cast<int>(ch);
    char asciitochar = static_cast<char>(asciival);

    cout<<"ASCCII VALUE : "<<asciival<<endl;
    cout<<"ASCII VALUE TO CHAR : "<<asciitochar<<endl;

}