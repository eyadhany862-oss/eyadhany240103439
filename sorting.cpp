#include <iostream>
#include <algorithm> 

int main() {
    int arr[] = {33, 11, 44, 22};
   
    int size = sizeof(arr) / sizeof(arr[0]);
    
   
    std::sort(arr, arr + size);
    
    
    std::cout << "Sorted array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n"; 
    
    return 0;
}