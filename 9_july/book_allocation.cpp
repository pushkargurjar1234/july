#include <iostream>
using namespace std;




bool possible(int arr[], int n, int m, int mid)
{
    int ssum = 0;
    int studentCount = 1;
    for (int i = 0; i < n; i++)
    {
        if (ssum + arr[i] <= mid)
        {
            ssum += arr[i];
        }
        else
        {
            studentCount++;
            //  cout<<studentCount<<"\n";
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
            ssum = arr[i];
        }
    }
    return true;
}







int bookAlocation(int arr[], int n, int m)
{

    int str = 0;
    int sum = 0;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    
    int end = sum;
    int mid = str + (end-str)/2;

    while (str <= end){
   
        if (possible(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            str = mid + 1;
        }
        mid = str + (end-str)/2;
    }
    return ans;
}








int main()
{
    int arr[] = {10, 20, 30, 40};
    int n = 4;

    cout << bookAlocation(arr, n, 2);
}