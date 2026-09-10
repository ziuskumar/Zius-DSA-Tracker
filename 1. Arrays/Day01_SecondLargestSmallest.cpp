/*
DSA: Second Largest and Second Smallest Element in an Array

Problem:
Given an array of integers, find the second largest and second smallest
distinct elements.

-------------------------------------------------------
Approach 1: Sorting
- Sort the array.
- Find the first element different from the smallest.
- Find the first element different from the largest.
- Time Complexity: O(n log n)
- Space Complexity: O(1) if sorted in-place.

Approach 2: Two Pass
- First pass: find the largest and smallest.
- Second pass: find the largest value smaller than largest
  and smallest value greater than smallest.
- Time Complexity: O(n)
- Space Complexity: O(1)

Approach 3: Single Pass
- Maintain largest, secondLargest, smallest and secondSmallest.
- Update them while traversing the array once.
- Ignore duplicate values.
- Time Complexity: O(n)
- Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {

    vector<int> arr = {5, 2, 8, 1, 9, 3};

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for (int x : arr) {

        // Largest and second largest
        if (x > largest) {
            secondLargest = largest;
            largest = x;
        }
        else if (x > secondLargest && x != largest) {
            secondLargest = x;
        }

        // Smallest and second smallest
        if (x < smallest) {
            secondSmallest = smallest;
            smallest = x;
        }
        else if (x < secondSmallest && x != smallest) {
            secondSmallest = x;
        }
    }

    cout << "Second Largest: " << secondLargest << endl;
    cout << "Second Smallest: " << secondSmallest << endl;

    return 0;
}

/*
Output:

Second Largest: 8
Second Smallest: 2
*/