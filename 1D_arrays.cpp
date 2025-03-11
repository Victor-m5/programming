// 1D arrays
/*  
   AUTHOR  : Victor Kinuthia
   REG NO  : BSE-05-0210/2024
   GROUP   : BSE  Group 3  
*/

#include <iostream>
#define INPUT_1D_ARRAY(arr, size) \
    for(int i = 0; i < size; i++) { \
        std::cout << "Enter value for element " << i << ": "; \
        std::cin >> arr[i]; \
    }

int main() {
    int size;
    std::cout << "Enter the size of the 1D array: ";
    std::cin >> size;
    int arr[size];
    INPUT_1D_ARRAY(arr, size);
    return 0;
}
