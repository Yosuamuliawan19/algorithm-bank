#include<iostream>
#include<stdio.h>
using namespace std;

int arr[100100] = {0};
// function to swap values at two indexes
void swap(int a, int b){
     printf("Swapping %d with %d, indexes %d and %d\n", arr[a], arr[b], a, b);
     int temp = arr[a];
     arr[a] = arr[b];
     arr[b] = temp;
}
void quickSort(int start, int end){
     int left = start, right = end;
     int pivot = arr[right];
     printf("Quicksorting from indexes %d to %d\n" , left, right);
     printf("Pivot is %d\n", pivot);
     while (left <= right){
          while (arr[left] < pivot) left++;
          while (arr[right] > pivot) right--;
          if (left <= right){
               swap(left, right);
               left ++;
               right --;
          }
     }
     if (start != left-1) quickSort(start, left-1);
     if (left != end) quickSort(left, end);
}

int main () {
     int size;
     cin >> size;
     for (int i=0;i<size;i++){
          cin >> arr[i];
          cout << arr[i] << " ";
     }
     cout << endl;
     quickSort(0, size-1);
     for (int i=0;i<size;i++){
          printf("%d ", arr[i]);
     }
     printf("\n");
}
