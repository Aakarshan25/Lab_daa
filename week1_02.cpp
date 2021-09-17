#include<iostream>
using namespace std;
int binarysearch(int arr[],int key,int n){
    int left=0;
    int right=n-1;
    int itr=0;
    while(right>=left){
        int mid=left+(right-left)/2;
        itr++;
        if(arr[mid]==key){
            cout<<"element found at position:-"<<mid<<endl;
            cout<<"total iteration:-"<<itr<<endl;
            return 1;
        }
        else if(arr[mid]<key){
            left=mid+1;
        }
        else right=mid-1;
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"enter element to be search"<<endl;
    cin>>x;
    int result=binarysearch(arr,x,n);
    result ? cout<<"program ends" : cout<<"element not found";
}