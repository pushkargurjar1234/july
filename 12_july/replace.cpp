#include <iostream>
using namespace std;
    int replace(char arr[],int n){
        int i=0;
        while(i<n){
            if(arr[i]==' '){
                arr[i]='@';
            }
            i++;
        }
    }


int main(){
    char arr[50];
    int count=0;
    cin.getline(arr,50);
    for(int i=0;arr[i]!='\0';i++){
        count ++;
    }
    replace(arr,count);
    cout<<arr;
}