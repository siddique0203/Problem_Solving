#include<iostream>
using namespace std;
int main(){
    int count,flag=0;
    cin>>count;
    string poly[count];

    for (int i=0; i<count; i++) {
        cin >> poly[i];

        if (poly[i] == "Tetrahedron") {
            flag += 4;
        } else if (poly[i] == "Cube") {
            flag += 6;
        } else if (poly[i] == "Octahedron") {
            flag += 8;
        } else if (poly[i] == "Dodecahedron") {
            flag += 12;
        } else if (poly[i] == "Icosahedron") {
            flag += 20;
        }
    }

    cout<<flag;
}
