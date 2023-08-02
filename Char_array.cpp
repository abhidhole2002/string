#include <iostream>
using namespace std;

void concatenate(char dest[], char source[])
{
    int len1 = 0;
    int len2 = 0;

    for (int i = 0; dest[i] != '\0'; i++)
    {
        len1++;
    }

    for (int i = 0; source[i] != '\0'; i++)
    {
        len2++;
    }

    dest[len1] = ' ';

    for (int i = 0; i < len2; i++)
    {
        dest[len1 +1  + i] = source[i];
    }

    dest[len1 + len2] = '\0';
}

int main() {
    const int size = 100;
    char str1[size];
    char str2[size];

    cout << "Enter string: ";
    cin.getline(str1, size);

    cout << "Enter another string: ";
    cin.getline(str2, size);

    cout << "String 1: " << str1 << endl;
    cout << "String 2: " << str2 << endl;

    concatenate(str1, str2);

    cout << "Concatenated String: " << str1 << endl;

}
