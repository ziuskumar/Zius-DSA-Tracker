/*
DSA: Reverse an Array

Problem:
Given an array, reverse its elements.

-------------------------------------------------------
Approach 1: Extra Array
- Create another array.
- Store elements from the end of the original array.
- Time Complexity: O(n)
- Space Complexity: O(n)

Approach 2: Two Pointer
- Use two pointers: one at the beginning and one at the end.
- Swap both elements and move the pointers towards the center.
- Time Complexity: O(n)
- Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> arr = {1, 2, 3, 4, 5};

    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}

/*
Output:

5 4 3 2 1
*/