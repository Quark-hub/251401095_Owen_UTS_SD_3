#include <iostream>
using namespace std;

int main(){
    int num[4][5];

    for (int i = 0; i<4; i++){
        for(int j = 0; j<5; j++){
            cout<<"Masukkan Data Barang :";cin>>num[i][j];
        }
    }
    for (int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            cout<<num[i][j]<<" ";
            }
        }
        cout<<endl;

}