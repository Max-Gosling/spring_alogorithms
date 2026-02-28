#include <cstddef>
#include <utility>
#include <vector>



std::pair<int, int> FindIdOfSum (int expected, const std::vector<int> &nums)
{
    std::size_t left {0};
    std::size_t right {nums.size()};
    std::pair<int, int> pair_of_ids(-1, -1);
    if (left == right)
    {
        return pair_of_ids;
    }
    while ((nums[left]+nums[right]) != expected) {
        if (nums[left]+nums[right] > expected)
        {
            right -= 1;
        }
        else 
        {
            left += 1;
        }
        if (left >= right)
        {
            return pair_of_ids;
        }
    }
    return std::make_pair(left, right);
};