#include<iostream>
using namespace std;
int secondlargest(int *arr, int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    if(n > 1) {
        return arr[n-2];
    } else {
        return 0;
    }
}
int sum(int *arr, int n) {
    if(n <= 3 || arr == nullptr) {
        return 0;
    }

    int evencount = 0, oddcount = 0;
    int evenarr[n/2 + 1], oddarr[n/2 + 1];
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            evenarr[evencount++] = arr[i];
        } else {
            oddarr[oddcount++] = arr[i];
        }
    }

    int secondlargesteven = secondlargest(evenarr, evencount);
    int secondlargestodd = secondlargest(oddarr, oddcount);

    return secondlargesteven + secondlargestodd;
}
int main() {
    int n;
    cout << "Enter the size of the array:" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the numbers in the array:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Output is:\n";
    cout << sum(arr, n) << endl;
    return 0;
}
