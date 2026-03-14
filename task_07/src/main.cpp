#include <iostream>
#include "sort.hpp"
#include <vector>


int main() { 
    int N;
    std::vector<int> nums(N);
    std::cin >> N;
    for (int i = 0; i < N; ++i)
    {
        std::cin >> nums[i];
    }
    QuickSort(N, nums);
    for (int elem:nums)
    {
        std::cout << elem << " ";
    }
    return 0; 
}
