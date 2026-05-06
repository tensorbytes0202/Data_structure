#include<iostream>
using namespace std;

void printSumfirstNo(int i, int sum){
    if(i < 1){
        cout << sum << endl;
        return;
    }

    printSumfirstNo(i - 1, sum + i);
}

int main(){
    int n;
    cin >> n;   
    printSumfirstNo(n, 0);
    return 0;
}