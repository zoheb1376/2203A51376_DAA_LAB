#include <iostream>
#include <vector>

using namespace std;

// Bubble Sort
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Selection Sort
void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
}

// Insertion Sort
void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Function to print the array
void printArray(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr1;
    vector<int> arr2;
    vector<int> arr3;

    // Initialize vectors using push_back
    arr1.push_back(2);
    arr1.push_back(1);
    arr1.push_back(11);
    arr1.push_back(7);
    arr1.push_back(3);
    arr1.push_back(14);
    arr1.push_back(6);

    arr2.push_back(3);
    arr2.push_back(1);
    arr2.push_back(9);
    arr2.push_back(5);
    arr2.push_back(16);
    arr2.push_back(12);

    arr3.push_back(3);
    arr3.push_back(1);
    arr3.push_back(9);
    arr3.push_back(5);
    arr3.push_back(16);
    arr3.push_back(12);

    cout << "Original Array for Bubble Sort: ";
    printArray(arr1);
    bubbleSort(arr1);
    cout << "Sorted Array by Bubble Sort: ";
    printArray(arr1);

    cout << "Original Array for Selection Sort: ";
    printArray(arr2);
    selectionSort(arr2);
    cout << "Sorted Array by Selection Sort: ";
    printArray(arr2);

    cout << "Original Array for Insertion Sort: ";
    printArray(arr3);
    insertionSort(arr3);
    cout << "Sorted Array by Insertion Sort: ";
    printArray(arr3);

    return 0;
}

