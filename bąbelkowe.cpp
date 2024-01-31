#include <iostream>

  void bubbleSort(int arr[], int n) {
     for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                std::swap(arr[j], arr[j+1]);
            }
          }
        }
      }

  int main() {
    int arr[] = {93, 13, 56, 12, 5, 44, 90};
     int n = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, n);

    std::cout << "Sortowanie bąbelkowe: ";
      for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    
    return 0;
}