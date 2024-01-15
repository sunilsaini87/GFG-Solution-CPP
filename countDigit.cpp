#include<bits/stdc++.h> 
using namespace std;

class Solution{
public:
    int evenlyDivides(int N){
        int Ncopy = N;
        int count = 0;
        
        while(N!=0){
            int mod =N%10;
            N=N/10;
            if(mod==0){
                continue;
            }
            else{
                if(Ncopy%mod==0){
                    count++;
                }
            }
        }
        return count;
    }
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}