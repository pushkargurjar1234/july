// not completed 

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "daabcbaabcbc";
    string find = "abc";
    int n = find.length();
    int j=0;

    for (int i = 0;  i < str.length(); i++)
    {
        
        
        if (str[i] == find[j])
        {
            for(j=1;j<n;j++);

            
        }
        else
        {
            j = 0;
        }
    }
}

