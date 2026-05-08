#include<iostream>
using namespace std;

void printLin(int i,int n){
    if(i>n)
        return;

    cout<<i<<endl;
    printLin(i+1,n);
}

int main(){
    int n;
    
    cin>>n;
    printLin(1, n);   // start from 1
    return 0;
}