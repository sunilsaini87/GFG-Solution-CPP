#include <iostream>
using namespace std;

int main() {
  int arr[] = {10,20,30,40,50,60};
  int arrSize = sizeof(arr)/sizeof(arr[3]);   // we can use arr[0].....arr[n]
  cout << "The size of the array is: " << arrSize;
  return 0;
}