#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int arr[num];
    int ev=0,od=0;
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }

    for(int i=0; i<num; i++){
        if(arr[i]%2==0){
            ev++;
        }
        else{
            od++;
        }
    }
    if(ev>od){
        for(int i=0; i<num; i++){
            if(arr[i]%2!=0){
                cout<<i+1;
                break;
            }
        }
    }
    else{
        for(int i=0; i<num; i++){
            if(arr[i]%2==0){
                cout<<i+1;
                break;
            }
        }
    }


}
