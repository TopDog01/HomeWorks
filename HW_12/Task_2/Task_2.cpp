﻿#include <iostream>

void heapify(float arr[], int n, int i) {
    int largest = i; 
    int left = 2 * i + 1; 
    int right = 2 * i + 2;

    
    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }

    
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    
    if (largest != i) {
        std::swap(arr[i], arr[largest]); 

        
        heapify(arr, n, largest);
    }
}

void heapSort(float arr[], int n) {
    
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    
    for (int i = n - 1; i > 0; i--) {
        std::swap(arr[0], arr[i]); 
        heapify(arr, i, 0); 
    }
}

int main() {
    const int size = 15;
    float numbers[size];

    std::cout << "Enter 15 floating-point numbers: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> numbers[i]; 
    }

    heapSort(numbers, size); 

    std::cout << "Numbers in descending order: ";
    for (int i = size - 1; i >= 0; --i) { 
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}