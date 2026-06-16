#include <bits/stdc++.h>
using namespace std;

int sum(int n){
    int sum = 0;
    while(n>0){
        int digit=n%10;
        sum=digit+sum;
        n=n/10;
    }
    return sum;
}
int main()
{
    int a;
    cin>>a;
    cout<<sum(a)<<endl;
return 0;
}