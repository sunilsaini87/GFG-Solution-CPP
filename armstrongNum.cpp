#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string armstrongNumber(int n){
        int ncp =n;
        int digit = 0;
        int result = 0;
        while(n!=0){
            digit = n%10;
            result = result + (digit*digit*digit);
            n=n/10;
        }
        if(result==ncp){
            return "Yes";
        }
        return "No";
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}