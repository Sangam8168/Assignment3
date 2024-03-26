#include<bits/stdc++.h>
using namespace std;

pair<int, int> getsMinMax(int arr[], int n) {
    int Min = INT_MAX;
    int Max = INT_MIN;

    
    for(int i = 0; i < n; i++) {
        if(arr[i] > Max) {
            Max = arr[i];
        }
        

        if(arr[i] < Min) {
            Min = arr[i];
        }
    }
    return make_pair(Min, Max);
}

int main() {
    int arr[] = {2, 4, 8, 4, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    pair<int, int> minMax = getsMinMax(arr, n);
    cout << "The min element of arr: " << minMax.first << endl;
    cout << "The max element of arr: " << minMax.second << endl;
    return 0;
}
