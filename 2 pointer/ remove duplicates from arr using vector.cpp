#include <bits/stdc++.h>
#include <vector>
using namespace std;

int removeDup(vector<int>& nums){
    if (nums.empty()) return 0;

    int allot = 0;

    for(int check = 1; check < nums.size(); check++){
        if (nums[check]!=nums[allot]){
            allot++;
            nums[allot]=nums[check];
        }
    }

    return allot+1;

}
int main()
{
    int size;
    if(!(cin>>size)) 
        return 0;

    vector <int> arr(size);
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int unique = removeDup(arr);

    cout<<unique;
    for (int i=0; i<unique; i++){
        cout<<arr[i];
    }
return 0;
}