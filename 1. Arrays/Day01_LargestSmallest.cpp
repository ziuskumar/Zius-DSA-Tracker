/*
LeetCode / DSA: Largest and Smallest Element in an Array

Problem:
Given an array of integers, find the largest and smallest element.

-------------------------------------------------------
Approach 1: Sorting
- Sort the array.
- First element = smallest.
- Last element = largest.
- Time Complexity: O(n log n)
- Space Complexity: O(1) if sorted in-place.

Approach 2: Linear Scan
- Initialize smallest and largest with the first element.
- Traverse the array once.
- Update smallest and largest when required.
- Time Complexity: O(n)
- Space Complexity: O(1).

Approach 3: STL
- Use min_element() and max_element().
- Both require O(n) traversal.
- Time Complexity: O(n)
- Space Complexity: O(1).
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> arr = {5, 2, 8, 1, 9, 3};

    int smallest = arr[0];
    int largest = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        smallest = min(smallest, arr[i]);
        largest = max(largest, arr[i]);
    }

    cout << "Smallest: " << smallest << endl;
    cout << "Largest: " << largest << endl;

    return 0;
}

/*
Output:

Smallest: 1
Largest: 9
*/