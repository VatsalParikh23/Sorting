#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
			}
		}
	}
}
int main() {
    int arr[] = {12, 24, 29, 3, 14};
    int n = 5;
    bubblesort(arr, n);
    
    return 0;
}
