#include <iostream>
using namespace std;

bool possible(int arr[],int s,int n,int sum,int m,int mid){
    int studentcount=0;
    int pagesum=0;

    for(int i=0;i<n;i++){
        if(pagesum+arr[i]<=mid){
            pagesum+=arr[i];
        }
        else{
            studentcount++;
            if(studentcount>m || arr[i]>mid){
                return false;
            }
            else{
                pagesum=arr[i];
            }
        }
    }
    return true;

}

int allocation(int arr[],int s,int n,int sum,int m){
    int e=sum;
    int ans=-1;
    int mid=(s+e)/2;
    while(s<=e){
        if(possible(arr,s,n,sum,m ,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return ans;
}



int main(){
    int arr[]={10,20,30,40};
    int m=2;
    int s=0;
    int e=4;
    int sum=0;
    for(int i=0;i<e;i++){
        sum+=arr[i];
    }

   cout<< allocation(arr,s,e,sum,m);
    

}



// this is not fully correct so i will make it correct on next day.