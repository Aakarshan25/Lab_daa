#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int f){
for(int i=0;i<n;i++){
        if(arr[i]==f){
            cout<<"present at"<<i<<endl;
            return 0;
        }
    }
    cout<<"not present"<<endl;
}
int main(){
    int cases;
    cin>>cases;
    while(cases!=0){
        int n,f;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cin>>f;
        linearsearch(arr,n,f);
        cases--;
    }
    return 0;
}
