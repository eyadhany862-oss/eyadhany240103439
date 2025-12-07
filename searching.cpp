#include <iostream>


int linearSearch(int arr[], int size, int target) {
  
    for (int i = 0; i < size; ++i) {
        
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1;
}

int main() {
    int data[] = {34, 78, 12, 56, 89, 23};
    int n = sizeof(data) / sizeof(data[0]);
    int key = 56;
    
    int result = linearSearch(data, n, key);
    
    if (result != -1) {
        std::cout << "Element " << key << " found at index " << result << std::endl;
    } else {
        std::cout << "Element " << key << " not found." << std::endl;
    }
    
    return 0;
}