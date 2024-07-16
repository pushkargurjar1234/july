#include <iostream>
#include <string>
using namespace std;
int main()
{
    string arr = "abbaca";
    string brr = "";
    int i = 0;
    while (i < arr.length())
    {
        if (brr.length() > 0)
        {
            if (brr[brr.length() - 1] == arr[i])
            {
                brr.pop_back();
            }
            else
            {
                brr.push_back(arr[i]);
            }
        }
        else{
            brr.push_back(arr[i]);
        }

        i++;
    }
    cout << brr;
}