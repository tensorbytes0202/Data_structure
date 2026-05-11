#include<iostream>
#include<map>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // PRECOMPUTE
    map<int,int> mpp;

    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }

    int q;
    cin >> q;

    while(q--){

        int number;
        cin >> number;

        // FETCH
        cout << mpp[number] << endl;
    }

    return 0;
}