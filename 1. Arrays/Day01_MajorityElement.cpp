/*
LeetCode: 169. Majority Element
Link: https://leetcode.com/problems/majority-element/

Problem:
Given an array nums of size n, return the majority element.
The majority element appears more than n/2 times.

-------------------------------------------------------
Approach 1: Brute Force

Explanation:
- Take each element one by one.
- Count how many times it appears in the array.
- If its count is greater than n/2, it is the majority element.

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int majorityElementBrute(vector<int>& nums) {

    int n = nums.size();

    for (int i = 0; i < n; i++) {

        int count = 0;

        for (int j = 0; j < n; j++) {
            if (nums[j] == nums[i])
                count++;
        }

        if (count > n / 2)
            return nums[i];
    }

    return -1;
}


/*
-------------------------------------------------------
Approach 2: Sorting

Explanation:
- Sort the array.
- Since the majority element appears more than n/2 times,
  it must occupy the middle position.
- Therefore, nums[n/2] is the majority element.

Time Complexity: O(n log n)
Space Complexity: O(1) if sorted in-place.
*/

#include <algorithm>

int majorityElementSorting(vector<int>& nums) {

    sort(nums.begin(), nums.end());

    return nums[nums.size() / 2];
}


/*
-------------------------------------------------------
Approach 3: Moore's Voting Algorithm

Explanation:
- Maintain a candidate and a count.
- If count becomes 0, choose the current element as candidate.
- If the current element equals the candidate, increase count.
- Otherwise, decrease count.
- Because the majority element appears more than n/2 times,
  it will remain as the final candidate.

Time Complexity: O(n)
Space Complexity: O(1)
*/

int majorityElementMoore(vector<int>& nums) {

    int candidate = 0;
    int count = 0;

    for (int x : nums) {

        if (count == 0)
            candidate = x;

        if (x == candidate)
            count++;
        else
            count--;
    }

    return candidate;
}


/*
Example:

Input:
nums = {2, 2, 1, 1, 1, 2, 2}

Output:
2
*/