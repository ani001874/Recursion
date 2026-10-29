//
// Created by ani on 10/29/26.
//

#ifndef RECURSION_PERMUTATION_H
#define RECURSION_PERMUTATION_H
#include <vector>


inline void permutation( std::vector<std::vector<int> > &ans, std::vector<int> &nums, const int index,
                        const int n) {
    if (index == n-1) {
        ans.push_back(nums);
        return;
    }

    for (int i = index;i<n;i++) {
        std::swap(nums[i], nums[index]);
        permutation(ans,nums,index + 1,n);
        std::swap(nums[i], nums[index]);
    }
}


#endif //RECURSION_PERMUTATION_H
