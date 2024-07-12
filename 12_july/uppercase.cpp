#include <iostream>
using namespace std;
int main(){
    char arr[6];
    cin>>arr;
    for(int i=0;i<6;i++){
    arr[i]=arr[i]-'a'+'A';
    }
    cout<<arr;
}