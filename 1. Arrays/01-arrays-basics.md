# 📦 Arrays Basics

/*
Topic: Arrays Basics

Definition:
An array is a linear data structure used to store multiple elements of the same data type.

-------------------------------------------------------
Key Points:

- Indexing starts from 0.
- Elements are stored in contiguous memory.
- Last index = size - 1.
- Accessing an element takes O(1).
- Traversing an array takes O(n).

Example:

int arr[5] = {10, 20, 30, 40, 50};

Index:
0 → 10
1 → 20
2 → 30
3 → 40
4 → 50

-------------------------------------------------------
Basic Operations:

Access:
arr[2] → O(1)

Update:
arr[2] = 100 → O(1)

Traversal:
Visit every element → O(n)

Linear Search:
Search element one by one → O(n)

-------------------------------------------------------
Common Mistake:

int arr[5];

arr[5];   // Invalid
Last valid index = 4
*/

#include <iostream>
using namespace std;

int main() {

    int arr[5] = {10, 20, 30, 40, 50};

    // Access
    cout << arr[2] << endl;

    // Update
    arr[2] = 100;

    // Traversal
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
Output:

30
10 20 100 40 50

-------------------------------------------------------
Time Complexity:

Access      → O(1)
Update      → O(1)
Traversal   → O(n)
Search      → O(n)

Space Complexity:

O(n)
*/