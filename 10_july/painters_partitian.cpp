#include <iostream>
using namespace std;

bool possible(int arr[], int n, int m, int mid)
{
    int sum = 0;
    int count = 1;

    for (int i = 0; i < n; i++)
    {
        if (sum + arr[i] <= mid)
        {
            sum += arr[i];
        }
        else
        {
            count++;
            if (count > m || arr[i] > mid)
            {
                return false;
            }
            sum = arr[i];
        }
    }
    return true;
}

int painter(int arr[], int n, int m)
{
    int str = 0;
    int sum = 0;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int end = sum;

    int mid = str + (end - str) / 2;
    while (str <= end)
    {
        if (possible(arr, n, m, mid))
        {

            ans = mid;
            end = mid - 1;
        }
        else
        {
            str = mid + 1;
            
        }
        mid = str + (end - str) / 2;
    }
    return ans;
}

int main()
{
    int arr[] = {5, 10, 30, 20, 15};
    cout << painter(arr, 5, 3);
}