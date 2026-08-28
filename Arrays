#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        // Map to store: Key = number, Value = its index
        std::unordered_map<int, int> numMap;
        
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            
            // Check if the complement already exists in the map
            if (numMap.find(complement) != numMap.end()) {
                // If found, return the index of the complement and current index
                return {numMap[complement], i};
            }
            
            // If not found, store the current number and its index
            numMap[nums[i]] = i;
        }
        
        // Return an empty vector if no solution is found (per constraints)
        return {};
    }
};

int main() {
    Solution solver;
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    
    std::vector<int> result = solver.twoSum(nums, target);
    
    if (!result.empty()) {
        std::cout << "Indices: [" << result[0] << ", " << result[1] << "]\n";
    } else {
        std::cout << "No solution found.\n";
    }
    
    return 0;
}
