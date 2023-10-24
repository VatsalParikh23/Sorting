#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
	for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        
    }
}
int main() {
    int arr[] = {12, 24, 29, 3, 14};
    int n = 5;
    bubblesort(arr, n);
    cout << "Sorted array: ";for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
