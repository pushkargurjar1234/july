#include <iostream>
using namespace std;
int main(){
    int arr[]={1,3,4,2,2};
    int i=0;
    while(arr[i]!=arr[arr[i]]){
        swap(arr[i],arr[arr[i]]);
    }
    cout<<arr[0] ;


}