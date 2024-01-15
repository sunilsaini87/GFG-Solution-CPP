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
            if (a[i++] == a[i--])
            {
                return true;
            }
        }
        return false;
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