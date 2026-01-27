#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cout<<"Enter number of array elements : \n";
  cin>>n;
  int arr[n];
  for(int i = 0; i < n; i++){
    cin>>arr[i];
  }
  int minValue = arr[0];
  int maxValue = arr[0];
  
  for(int i = 1; i < n; i++){
    if(arr[i] < minValue){
      minValue = arr[i];
    }
  }
  
  for(int i = 1; i < n; i++){
    if(arr[i] > maxValue){
      maxValue = arr[i];
    }
  }
  cout<<"Max Value : "<<maxValue;
  cout<<"\nMin Value : "<<minValue;
  
  return 0;
}
