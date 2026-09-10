/*
LeetCode: 1. Two Sum
Link: https://leetcode.com/problems/two-sum/

Problem:
Given an array of integers nums and an integer target, return the indices
of the two numbers such that they add up to target.

-------------------------------------------------------
Approach 1: Brute Force
- Check every possible pair using two nested loops.
- Return the pair whose sum equals target.
- Time Complexity: O(n^2)
- Space Complexity: O(1)

Approach 2: Sorting + Two Pointer
- Store each element with its original index.
- Sort the elements.
- Use two pointers to find the target sum.
- Time Complexity: O(n log n)
- Space Complexity: O(n)

Approach 3: HashMap (Optimal)
- Store each number and its index in an unordered_map.
- For every element, calculate:
  complement = target - nums[i]
- Check if the complement already exists.
- Time Complexity: O(n) average
- Space Complexity: O(n)
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {

            int complement = target - nums[i];

            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};