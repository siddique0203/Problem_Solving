#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    string nums[num];
    int sl[100];
    for(int i=0; i<num; i++){
        sl[i]=0;
    }

    for(int i=0; i<num; i++){
        cin>>nums[i];
    }
    for(int i=0; i<num; i++){
        int n=0;
        for(int j=0; j<i; j++){
            if(nums[i]==nums[j]){
                n=1;
                sl[i]++;
            }
        }
        if(n==1){

            cout<<nums[i]<<sl[i]<<endl;
        }
        else{
            cout<<"OK"<<endl;
        }
    }
}
