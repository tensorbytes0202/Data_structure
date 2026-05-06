#include<iostream>
using namespace std;

void printLin(int i,int n){
    if(i<1)
        return;

    cout<<i<<endl;
    printLin(i-1,n);
}

int main(){
    int n;
    
    cin>>n;
    printLin(n, n);   // start from 1
    return 0;
}