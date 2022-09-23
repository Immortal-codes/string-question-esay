#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str="GGGGGGR";
    int count=0;

    for (int i = 0; i < str.length(); i++)
    {
       if (str[i]=='R')
       {
           count++;
       }
       
    }
    cout<<count;
    
}