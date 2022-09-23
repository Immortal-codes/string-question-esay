#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "computer";
    string str1 = "cat";
    string str2;

    int j;
    int i;

    for (i = 0; i < str.length(); i++)
    {
        for (j = 0; j < str1.length(); j++)
        {
            if (str[i]==str1[j])
            {
                i++;
                str2[i]=str1[j];
               
            }
            
        }
        
cout<<str[i];
      
    }
    
}