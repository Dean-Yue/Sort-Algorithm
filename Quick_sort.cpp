#include<iostream>
#include <vector>
using namespace std;


void quickSort3Way(vector<int>& arr, int left, int right) {
    if (left >= right) return;
    int lt = left, i = left + 1, gt = right;
    int pivot = arr[left];

    while (i <= gt) {
        if (arr[i] < pivot) {
            swap(arr[i++], arr[lt++]);
        } else if (arr[i] > pivot) {
            swap(arr[i], arr[gt--]);
        } else {
            i++;
        }
    }
    quickSort3Way(arr, left, lt - 1);
    quickSort3Way(arr, gt + 1, right);
}