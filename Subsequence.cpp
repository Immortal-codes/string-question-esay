#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str="gksrek";
    string str1="geeksforgeeks";
    string str2;
    int j=0;
    int i;

    for ( i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < str1.length(); j++)
        {
            if (str[i]==str1[j])
            {
                str2[i]=str1[j];
               
            }
            
        }
        cout<<str2[i];
        
    }
    
    
    if (str2[i]==str[i])
    {
        cout<<"yes";
    }
    else{
        cout<<"No";
    }
    
    
}