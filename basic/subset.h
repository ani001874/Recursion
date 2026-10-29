//
// Created by ani on 10/29/26.
//

#ifndef RECURSION_SUBSET_H
#define RECURSION_SUBSET_H
#include <unordered_map>
#include <vector>


inline void findAllSubsets(const std::vector<int> &nums, int index, const int n, std::vector<int>& s,  std::vector<std::vector<int> > &subsets) {
    if (index == n) {
        subsets.push_back(s);
        return;
    }
        s.push_back(nums[index]);
        findAllSubsets(nums, index + 1, n,s, subsets);
        s.pop_back();
        findAllSubsets(nums, index + 1, n,s, subsets);

}

inline int countSubset(const int index , const int n) {
    if (index == n) {
        return 1;
    }

    const int a = countSubset(index + 1, n);
    const int b  = countSubset(index + 1, n);
    return a + b;
}

inline int subsetSumEqualsK(const std::vector<int> &nums, const int k, const int index , const int sum , const int n) {
    if (sum == k) {
        return 1;
    }
    if (index == n | sum > k) {
        return  0;
    }

   int a =  subsetSumEqualsK(nums, k, index + 1, sum + nums[index], n);
   int b = subsetSumEqualsK(nums, k, index + 1, sum , n);

    return a + b;

}


inline void findUniqueSubsets(const std::vector<int> &nums,const int index, const int n, const int sum ,std::vector<int>& s, std::vector<std::vector<int> > &subsets, std::unordered_map<int,int> &subsets_map) {
    if (index == n) {
        subsets.push_back(s);
        return;
    }

}




#endif //RECURSION_SUBSET_H
