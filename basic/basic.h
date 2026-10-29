//
// Created by ani on 10/26/26.
//

#ifndef RECURSION_BASIC_H
#define RECURSION_BASIC_H

#include <iostream>
#include <vector>


inline void print1N(int a, int b, bool isReverse = false) {
    if (a == b) {
        if (isReverse)
            std::cout << a << " ";
        else
            std::cout << a << std::endl;
        return;
    }

    if (isReverse) {
        print1N(a + 1, b, true);
        std::cout << a << " ";
    } else {
        std::cout << a << " ";
        print1N(a + 1, b);
    }
}


inline float mean(int arr[], int n) {
    if (n == 1)
        return arr[0];
 int x = n -1;
 float  M = mean(arr, x);
return ((x) * M + arr[x]) / n;
}

inline std::string int_to_binary(int n) {
    if (n == 1) return "0b1";
    const int remainder =  n%2;
    return int_to_binary(n/2) + (remainder == 0 ? "0" : "1");
}

inline std::string int_to_binary2(const int n, const int bits) {
    if (bits == 0) return (n >> 0 ) & 1 ? "1" : "0";

    const int x = (n >> bits) & 1;
    return (x == 1 ? "1" : "0") + int_to_binary2(n, bits - 1);
}


inline std::string reverse_str(const std::string& s, const int size) {
    if (size == 0) return "";
    return reverse_str(s, size - 1) + s[s.length() - size] ;
}


inline void printVector(const std::vector<int>& v) {
    for (const int x : v) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}


inline void print2DVector(std::vector<std::vector<int> >& v) {
    for (auto & i : v) {
        std::cout << "[";
        for (int j = 0; j < i.size(); j++) {
            std::cout << i[j];
            if (j != i.size() - 1) std::cout << ",";
        }
        std::cout << "], ";
    }

    std::cout << std::endl;

}




#endif //RECURSION_BASIC_H
