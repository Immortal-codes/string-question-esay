#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{

    string s="abcd";

    int n=s.length();
        if(s[0]>=97 && s[0]<=122){
           transform(s.begin(),s.end(),s.begin(),::tolower);
        }
        else{
            transform(s.begin(),s.end(),s.begin(),::toupper);
        }
        cout<<s;

}