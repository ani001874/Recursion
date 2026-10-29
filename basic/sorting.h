//
// Created by ani on 10/28/26.
//

#ifndef RECURSION_SORTING_H
#define RECURSION_SORTING_H
#include <vector>

void mergeSort(std::vector<int>& v, const int st, const int end) {
    if (st == end ) return;

    const int mid = (st + end) / 2;
    mergeSort(v, st, mid);
    mergeSort(v, mid + 1, end);
    std::vector<int> R(end-st+1);
    int left = st, right = mid + 1;
    int  index  = 0;

    while (left <= mid && right <= end) {
        if (v[left] < v[right]) {
             R[index++] = v[left];
             left++;
        } else {
            R[index++] = v[right];
            right++;
        }
    }

    while (right <= end) {
        R[index++] = v[right];
        right++;
    }

    while (left <= mid) {
        R[index++] = v[left];
        left++;
    }

    index = 0;
    for (int i = st;i <= end;i++) {
        v[i] = R[index++];
    }



}


void print(std::vector<int> v, int index, int n) {
    if (index == n) return;
   std::cout << v[index] << " ";
    print(v, index+1, n);

}

#endif //RECURSION_SORTING_H
