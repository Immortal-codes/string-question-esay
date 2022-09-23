#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string str="geeksforgeeks";

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]==str[i+1])
        {
            cout<<str[i];
            break;
        }
        
    }
    
}