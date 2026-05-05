#include<iostream>
using namespace std;
void printName(int i,int n,string name){
    if(i>n)
    return;
cout<< name << endl;
printName(i+1,n,name);
}

int main(){
    printName(1,6,"Aditya");
    return 0;
}

