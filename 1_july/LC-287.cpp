#include <iostream>
#include <vector>
using namespace std;

    int element(vector<int>arr){
        int t;
        for(int i=0;i<arr.size();i++){
            t=arr[i];
            if(arr[abs(t)]<0){
               return abs(t);                
            }
            else{
                arr[abs(t)]=-arr[abs(t)];
            }
        }
        return -1;
    }

int main(){
    vector<int>arr{1,3,4,2,2};
   cout<< element(arr);

}
