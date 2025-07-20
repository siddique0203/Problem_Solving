#include<iostream>
using namespace std;
int main(){
    int num[4],count=0;

    for(int i=0; i<4; i++){
        cin>>num[i];
    }
    for(int i=0; i<4; i++){
       for(int j=i+1; j<4; j++){
        if(num[i]==num[j]){
            count++;
            break;

        }
       }
    }
     cout<< count;

}
