#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}
int main(){
    int n,x;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter element to be searched"<<endl;
    cin>>x;
    int result=linearsearch(arr,n,x);
    (result==-1) ?cout<<"not present":cout<<"present at index"<<result;
    return 0;
}       