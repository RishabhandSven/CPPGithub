#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        bool isswap = false;
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isswap = true;
            }
        }
        if(!isswap) {
            return;
        }
    }
}
void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;   
}
int main() {
    int arr[]={32,324,43,65,98,8954,23978};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    printArray(arr, n);
}