#include<iostream>
using namespace std;
int main(){
    string st;
    string rev="";
    cin>>st;

    for(int i=st.length(); i>=0; i--){
        rev+=st[i];
    }

    cout<<rev;


}
