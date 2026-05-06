#include<iostream>
using namespace std;

void reverseArr(int arr[], int l, int r){
    if(l >= r)
        return;
    
    swap(arr[l], arr[r]);
    reverseArr(arr, l+1, r-1);
}

int main(){
    int n;
    cin >> n;

    int arr[100];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    reverseArr(arr, 0, n-1);

    // print reversed array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}