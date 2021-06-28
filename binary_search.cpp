#include <iostream>
int binary_search(int arr[],int target,int length){
int left = 0;
int right = length - 1;
int mid;
while (left <= right){
  mid = (left + right) / 2;
  if (arr[mid] == target){
    return mid;
  }
  else if (target < arr[mid]){
    right = mid - 1;
  }
  else {
    left = mid + 1;
  }
}
return -1;
}
int main(){
int arr[8] = {2,4,7,10,12,12,14,16};
std::cout << binary_search(arr,16,8);
}
