#include<bits/stdc++.h>
using namespace std;

class Solution
{
	public:
		long long int reverse_digit(long long int n)
		{
		long long int ans=0;
        while(n!=0)
        {
            long long int digit=n%10;
            ans=ans*10+digit;
            n=n/10;
        }
        return ans;
	}
};

int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long long int n;
    	cin >> n;
    	Solution ob;
    	long long int  ans = ob.reverse_digit(n);
    	cout << ans <<"\n";
    }
	return 0;
}