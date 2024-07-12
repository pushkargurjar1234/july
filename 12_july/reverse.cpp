#include <iostream>
using namespace std;

char reverse(char arr[],int n)
{

    cout << "size of arr is " << n << endl;
    int s = 0;
    while (s < n)
    {
        swap(arr[s], arr[n - 1]);
        s++;
        n--;
    }
}

int main()
{
    char arr[50];
    cin >> arr;
    int n = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        n++;
        
    }
    reverse(arr,n);
    cout << arr;
}