#include <iostream>
using namespace std;

int merge(int arr[], int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int left[n1];
    int right[n2];

    for (int i = 0; i < n1; i++) {
        left[i] = arr[low+i];
    }

    for (int j = 0; j < n2; j++) {
        right[j] = arr[mid+1+j];
    }

    int i = 0, j = 0, k = low, res = 0;

    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            k++;
            i++;
        } else {
            arr[k] = right[j];
            k++;
            j++;
            res += (n1 - i); //since all the elements ahead will also have inversion
        }
    }

    while (i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = right[j];
        k++;
        j++;
    }

    return res;
}

int inversions(int arr[], int low, int high) {
    int res = 0;
    if (high > low) {
        int mid = (high + low) / 2;
        res += inversions(arr, low, mid);
        res += inversions(arr, mid + 1, high);
        res += merge(arr, low, mid, high);
    }
    return res;
}

int main() {
    int arr[] = {1, 2, 4, 1, 3,  5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The inversions are " << inversions(arr, 0, n - 1);
    return 0;
}
