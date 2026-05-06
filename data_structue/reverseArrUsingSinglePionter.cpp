#include<iostream>
using namespace std;

void reverseArr(int arr[], int i,int n){
    if(i >= n/2)
        return;
    
    swap(arr[i], arr[n-i-1]);
    reverseArr(arr,i+1,n);
}

int main(){
    int n;
    cin >> n;

    int arr[100];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    reverseArr(arr, 0, n);

    // print reversed array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}