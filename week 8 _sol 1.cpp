#include<iostream>
#include<string>
using namespace std;

main()
{
    string c,s;
    int i;

    cout << "Input String : ";
    getline(cin , c);

    for(i=0;c[i]!='\0';i++) if((c[i]>='A'&&c[i]<='Z')||(c[i]>='a'&&c[i]<='z')) s+=tolower(c[i]);

    int l=s.length();
    int ch=0;

    for(i=0;i<l/2;i++)
    {
        if(s[i]==s[l-i-1]) ch++;
        else break;
    }
    if(ch==l/2) cout << "Palindrome";
    else cout << "Not Palindrome";
    return 0;
}

