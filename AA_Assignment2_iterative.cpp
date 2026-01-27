// ITERATIVE IMPLEMENTATION
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  
  cout<<"Iterative Implementation : \n";
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
  
  int index = -1;
  int low = 0, high = n;
  int comparisions = 0;
  
  while(low <= high){
    int mid = (low + high) / 2;
    comparisions++;
    if(arr[mid] == target){
      index = mid;
      break;
    }
    else if(arr[mid] < target){
      low = mid + 1;
    }
    else{
      high = mid - 1;
    }
  }
  
  if(index == -1){
    cout<<"\nElement to be searched is not present in the array \n";
  }
  else{
    cout<<"\nTarget element "<<target<<" found at index "<<index<<endl;
    cout<<"Comparisions : "<<comparisions<<endl;
  }
  
  return 0;
}
