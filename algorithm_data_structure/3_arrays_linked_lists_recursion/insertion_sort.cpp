#include <iostream>

void insertionSort(char* A, int n) {
    for (int i=1; i<n; i++) {
        char cur = A[i]; // current character to insert
        int j=i-1; // start at previous character
        while (j>=0 && A[j]>cur) { // while A[j] is out of order
            A[j+1] = A[j]; // move A[j] to right position
            j--;
        }
        A[j+1]=cur; // proper place for cur
    }
}

int main() {
    char arr[] = {'B','C','D','A','E','H','G','F'};
    insertionSort(arr, 8);
    for (char e: arr) {
        std::cout<<e<<' ';
    }
}

