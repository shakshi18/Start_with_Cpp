/*
1
23
456
78910*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int i=1;
    int val =1;
    while (i<=n){
        int j=1;
        while (j<=i){
            cout<<val;
            val++;
            j++;
        }
        cout<<endl;
        i++;
    }
}
