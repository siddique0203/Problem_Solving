#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        if(arr[i]>=3 && arr[i]%2 !=0){
           if(arr[i]==3){
            cout<<1<<endl;
           }
           else{
            cout<<long(int((arr[i]/2.0)))<<endl;
            continue;
           }
        }

        else if(arr[i]>=3 && arr[i]%2==0){

            cout<<long((arr[i]/2.0)-1)<<endl;
            continue;
        }
        else{
            cout<<0<<endl;
            continue;
        }
    }
}
