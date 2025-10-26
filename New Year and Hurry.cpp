#include<iostream>
using namespace std;
int main(){

    int a,b,sub,sum=0,flag=0;
    cin>>a>>b;
    sub=240-b;

    for(int i=1; i<=a; i++){
        sum=sum+ i*5;
        flag++;
        if(sum>sub) break;
    }
    if(sum>sub) cout<<(flag-1);
    else cout<<flag;


}
