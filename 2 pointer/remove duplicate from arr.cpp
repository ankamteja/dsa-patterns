/*Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

Consider the number of unique elements in nums to be k​​​​​​​​​​​​​​. After removing duplicates, return the number of unique elements k.

The first k elements of nums should contain the unique numbers in sorted order. The remaining elements beyond index k - 1 can be ignored.*/

//Time Complexity: O(n)
//Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int allot = 0;
    int check = 1;
    int unique = 1;
    int size;
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    while(check<size){
        
        if(arr[check]==arr[check-1]){
            check++;
            continue;
        }
        arr[allot+1]=arr[check];
        check++;
        allot++;
        unique++;
    }
    cout<<unique<<endl;
     for(int i=0; i<unique; i++){
        cout<<arr[i];
    }
return 0;
}