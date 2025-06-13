
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int size = nums.size();
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = 1; j < size ; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return {-1};
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3,2,4};
    int target = 6;
    vector<int> result = sol.twoSum(nums, target);
    for (int idx : result) {
        cout << idx << " ";
    }
    cout << endl;
    return 0;
}
