#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string str="100klh564abc365bg";
    string str2;
     
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]>=65 && str[i]<=122)
        {
            continue;
           str2[i]=str[i];
           cout<<str2[i];
        }
        else
        {

        }
        
    }
    
    
    
}