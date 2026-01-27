// RECURSIVE IMPLEMENTATION
#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int low, int high, int target, int &comparisions) {
  if (low > high) {
    return -1;
  }
  comparisions++;
  int mid = (high + low) / 2;
  if (arr[mid] == target) {
    return mid;
  }
  else if (arr[mid] < target) {
    return binarySearch(arr, mid + 1, high, target, comparisions);
  }
  else {
    return binarySearch(arr, low, mid - 1, target, comparisions);
  }
}

int main() {
  int n;
  cout<<"Recursive Implementation \n";
  cout<<"Enter number of array elements : \n";
  cin>>n;
  int arr[n];
  cout<<"Enter "<<n<<" array elements : \n";
  
  for(int i = 0; i < n; i++){
    cin>>arr[i];
  }
  
  int target;
  cout<<"Enter element to be searched : ";
  cin>>target;
  
  int low = 0, high = n - 1;
  int comparisions = 0;
  
  int result = binarySearch(arr, low, high, target, comparisions);
  
  if(result != -1) {
    cout << "\nElement found at index " << result << "\n";
    cout<<"No. of comparisions : "<<comparisions<<endl;
  }else {
    cout << "Element not found" << endl;
  }
  return 0;
}
