/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.*/

/*
PSUEDO CODE: 
input -> arr, target, size
sorting -> it will become easier but we cant as indices will change

we can bruteforce but the time complexity will be O(n^2)
we can use hashmap for 
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
            for(int i=0; i<n; i++){
                cin>>arr[i];
            }
    int target;
    cin>>target;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==target){
                cout << i << " " << j << "\n";
                return 0;
            }
        }
    }
    return 0;

}