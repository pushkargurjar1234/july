#include <iostream>
using namespace std;
int main(){
    char arr[50];
    cin>>arr;
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    int s=0;
    while(s<count){
        if(arr[s]==arr[count-1]){
            s++;
            count--;
        }
        else{
            cout<<"Not palindrome";
            return 0;
        }
    }
    cout<<"it is palindrome";
}