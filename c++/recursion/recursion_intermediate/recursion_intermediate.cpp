// CLIMBING STAIRS PROBLEM
/*
#include <iostream>
int climbStairs(int n){
  //base case
  if(n == 0){
    return 1;
  }
  if(n == 1){
    return 1;
  }
  int ans = climbStairs(n-1)+climbStairs(n-2);
  return ans;
}
using namespace std;
int main(){
  cout<<"enter the steps destination to reach "<<endl;
  int n;
  cin>>n;
  int res = climbStairs(n);
  cout<<"the required number of ways to reach the destination "<<res<<endl;
  return 0;

}
*/

// Printing the array recursively
/*
#include <iostream>
using namespace std;
void printArray(int arr[],int i, int size){
  //base case
  if(i > size-1){
    return;
  }
  cout<<arr[i]<<" ";
  printArray(arr,i+1,size);
}
int main(){
  int arr[] = {1,2,3,4,5,6,7,8};
  int size = 8;
  int i = 0;
  printArray(arr,i,size);
}
*/

// FINDING THE MAX ELEMENT IN THE ARRAY
// always pass the MAX AS A REFERENCE NOT AS A VALUE
/*
#include <algorithm>
#include <iostream>
#include <limits.h>
using namespace std;
int findMax(int* arr, int i, int size,int& maxi){
  //base case
  if(i>size-1){
    return 0;
  }
  if(arr[i]>maxi){
    maxi = arr[i];
  }
  findMax(arr, i+1,size,maxi);
  return maxi;
}
using namespace std;
int main(){
  int arr[] = {1,2,3,4,5,2,10};
  int maxi = INT_MIN;
  int i = 0;
  int size = 7;
  int res = findMax(arr,i,size,maxi);
  cout<<"the max element in the array is "<<res<<endl;
  return 0;
}
*/

/*
//Same question finding the minimum value
#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;
int findMin(int arr [], int& mini, int i, int size){
  //base case
  if(i>size-1){
    return -1;
  }
  if(arr[i]<mini){
    mini = arr[i];
  }
  findMin(arr, mini, i+1,size);
  return mini;
}
int main(){
  int arr [] = {10,2,3,4,5,6,7,8,9,1};
  int mini = INT_MAX;
  int i = 0;
  int size = 10;
  int res = findMin(arr, mini, i,size);
  cout<<"the minimum element in the array  is "<<res<<endl;
  return 0;
}
*/

// Given a string and find whether a character is in that string or not
/*
#include <iostream>
using namespace std;
bool charFinder(string str, char key, int i){
  //base case
  if(i>str.length()){
    return false;
  }
  if(str[i] == key){
    return true;
  }
  bool ans = charFinder(str,key,i+1);
  return ans;
}
int main(){
  string str = "Love Babbar";
  char key = 'z';
  int i = 0;
  if(charFinder(str,key,i)){
    cout<<"the required char is in the string"<<endl;;
  }
  else{
    cout<<"nope not there"<<endl;
  }
}
*/
