
/* Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.

Return the indices of the two numbers index1 and index2, each incremented by one, as an integer array [index1, index2] of length 2. Return the indices of the two numbers index1 and index2, each incremented by one, as an integer array [index1, index2] of length 2.

The tests are generated such that there is exactly one solution. You may not use the same element twice.

Your solution must use only constant extra space.*/

/*
PSUEDO CODE: 

Two pointer soln:

input -> array, target, size of the array

sort(array)
int i=0, j=n-1
while(i<j)
{
int sum = a[i]+a[j]

    if(target < a[i]+a[j])
        j--

    if(target > a[i]+a[j]) 
        i++

    if(target = a[i]+a[j])
        return i, j;
        break;
}
return -1;

Time Complexity: O(nlogn)
Space Complexity: O(1)

if sorted, this works for both number and also index
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout<<"enter the target sum: ";
    int target;
    cin>>target;

    cout<< "enter the size of the array: ";
    int size;
    cin>>size; 

    int arr[size];
    cout<< "enter the arr: ";

//input arr
    for (int i=0; i<size; i++) {
        cin >> arr[i];
    }

//sort arr
    sort(arr, arr + size);

int i=0, j=size-1;

while(i<j){
    int sum = arr[i]+arr[j];
    if(sum==target){
        cout<<"["<<i+1<<","<<j+1<<"]"<<endl;
        return 0;
        }
    else if(sum<target){
        i++;
    }
    else{
        j--;
    }
}
return -1;
}