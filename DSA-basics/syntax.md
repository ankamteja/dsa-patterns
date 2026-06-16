# C++ Syntax

## Output
```cpp
cout << "Hello DSA";
cout << a;
cout << "Hello " << a << endl;
```

## Variables
```cpp
int a;
int a = 10;
```

## Input
```cpp
cin >> a;
cin >> a >> b;
```

## Operators
```
+  -  *  /  %    → arithmetic
=                 → assignment
==                → comparison
&&  ||            → logical AND / OR
```

## If-else
```cpp
if (a > 10) {
    cout << "hello";
} else if (a > 5) {
} else {}

if (a % 3 == 0 || a % 2 == 0) {}
```

## For Loop
```cpp
for (int i = 0; i < 5; i++) {
    cout << "hello" << endl;
}
```

## While Loop
```cpp
while (condition) { }

while (true) {
    if (someCondition) break;
    if (otherCondition) continue;
}
```

## Functions
```cpp
int func(int n) {
    return 2 * n;
}

int main() {
    cout << func(10) << endl;
}
```

## Arrays

### Static Array
```cpp
int arr[5] = {1, 2, 3, 4, 5};
int arr[5];          // uninitialized
arr[0] = 10;         // access/set by index

// iterate
for (int i = 0; i < 5; i++) {
    cout << arr[i] << endl;
}
```

### Vector (dynamic array — use this for DSA)
```cpp
#include <bits/stdc++.h>

vector<int> v = {1, 2, 3};
v.push_back(4);       // add to end
v.pop_back();         // remove from end
v.size();             // length
v[0];                 // access by index

// iterate
for (int x : v) {
    cout << x << endl;
}
```

## Linked List

### Manual (Node-based)
```cpp
struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// create nodes
Node* head = new Node(1);
head->next = new Node(2);
head->next->next = new Node(3);
// 1 → 2 → 3 → null

// traverse
Node* temp = head;
while (temp != nullptr) {
    cout << temp->data << endl;
    temp = temp->next;
}
```

### STL List (predefined)
```cpp
list<int> l = {1, 2, 3};
l.push_back(4);       // add to end
l.push_front(0);      // add to front
l.pop_back();
l.pop_front();

for (int x : l) {
    cout << x << endl;
}
```