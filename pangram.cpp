#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int i,n,count=0;
    n=s.length();
    for(i=0;i<n;i++)
    {
        if((s[i]>='A')||(s[i]<='Z')||(s[i]<='a')||(s[i]<='z'))
        {
            count++;
        }
        else
        {
            break;
        }
    }
    if(count==26)
    {
        cout<<"Pangram";
    }
    else{
        cout<<"Not a pangram";
    }
}
