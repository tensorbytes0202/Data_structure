#include<iostream>
using namespace std;
void printLin(int i,int n){
    if(i<1) #condition check here
    return;
    printLin(i-1,n);
    cout<<i<<endl;
}
int main(){
    int n;
    cin>>n;
    printLin(n,n);
    return 0;
}