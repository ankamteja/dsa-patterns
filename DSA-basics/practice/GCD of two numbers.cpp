#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a; 
}
int main()
{
    int l, k;
    cin>>l>>k;
    cout<<gcd(l, k)<<endl;
    
return 0;
}