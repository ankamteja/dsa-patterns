#include <bits/stdc++.h>
using namespace std;

int getOut(const vector<int>& nums, const vector<int>& nums1, vector<int>& nums3){
    int i = 0;
    int j = 0;
    int z = 0;

    while (i < nums.size() and j < nums1.size()) {
        if(nums[i]<nums1[j]){
            nums3[z] = nums[i];
            i++;
        }
        else{
            nums3[z] = nums1[j];
            j++;
        }
    z++;
    }
    while (j < nums1.size()){
        nums3[z] = nums1[j];
        z++;
        j++;
    }
    while (i < nums.size()){
        nums3[z] = nums[i];
        z++;
        i++;
    }
    for (int i = 0; i < nums3.size(); i++) {
        cout<<nums3[i]<<" ";
    }
return 0;
}


int main()
{   
    int size, size1;
    if(!(cin>>size>>size1)) return 0;

    int size3 = size1 + size;

    vector<int> arr(size);
    vector<int> arr1(size1);
    vector<int> arr2(size3);

    for (int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < arr1.size(); i++) {
        cin >> arr1[i];
    }

    getOut(arr, arr1, arr2);
return 0;
}