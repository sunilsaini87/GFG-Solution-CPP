#include <iostream>
#include <string.h>
using namespace std;

class Solution
{
public:
	int PalinArray(int a[], int n)
	{
		for (int i = 0; i < n; i++)
		{
			int revs = 0;
			int x = a[i];

			while (x != 0)
			{

				int digit = x % 10;
				revs = revs * 10 + digit;
				x = x / 10;
			}

			if (revs != a[i])
			{
				return 0;
			}
		}
		return 1;
	}
};
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		Solution obj;
		cout << obj.PalinArray(a, n) << endl;
	}
}