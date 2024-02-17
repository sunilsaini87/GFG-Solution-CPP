#include<bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    string reverseWords (string s)
    {
        int j=0;
        int n = s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                reverse(s.begin()+j,s.begin()+i);
                j=i+1;
            }}
        reverse(s.begin()+j,s.end());
    return s;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Explain
// The function initializes j to 0 and n to 28 (the length of the input string).

// The loop iterates through each character of the string:

// At index 1, it encounters a period ('.'). So, it reverses the characters from index 0 to 0, resulting in no change (as there's only one character).

// At index 6, it encounters another period. It reverses the characters from index 2 to 5, resulting in "like" becoming "ekil".

// At index 11, it encounters another period. It reverses the characters from index 7 to 10, resulting in "this" becoming "siht".

// At index 18, it encounters another period. It reverses the characters from index 12 to 17, resulting in "program" becoming "margorp".

// At index 22, it encounters another period. It reverses the characters from index 19 to 21, resulting in "very" remaining "very" as it's a single-character word.

// At index 27, it reaches the end of the string. It reverses the characters from index 23 to 27, resulting in "much" becoming "hcum".

// Finally, the function returns the modified string "i ekil siht margorp very hcum".
