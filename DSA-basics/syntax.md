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
// 0 = false, anything else = true
if (a > 10) {
    cout << "hello";
} else if (a > 5) {
} else {}

if (a % 3 == 0 || a % 2 == 0) {}
```

## Loops

## For Loop
```cpp
for (int i = 0; i < 5; i++) {
    cout << "hello" << endl;
}
```
## While Loop
```cpp
// basic
while (condition) {
    // code
}

// infinite loop
while (true) {
    if (someCondition) break;    // exit loop
    if (otherCondition) continue; // skip to next iteration
}

// example
int i = 0;
while (i < 5) {
    if (i == 3) { i++; continue; } // skip 3
    cout << i << endl;
    i++;
}
```

## Functions
```cpp
int func(int n) {
    return 2 * n;
}

int main() {
    int m = 10;
    cout << func(m) << endl;
}
```