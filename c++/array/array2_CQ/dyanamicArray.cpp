
// initialisation methods o dyanamic array

#include <iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> arr;
  vector<int>arr1{1,2,3,4,5};
  vector<int>arr2(10,0);
  int n;
  cin>>n;
  vector<int> arr3(n);
  arr3.push_back(5);
  arr3.push_back(5);
  arr3.pop_back();
  arr.size();
  arr.empty();
}


// size of the array = kitne elements pade hai abhi array mein
// capacity = kitne elements ek aray in principle hold kar sakta hai

// find the unique element in the array

#include <iostream>
#include <vector>
using namespace std;
int findUnique(vector<int>arr){
  int res = 0;
  for(int i = 0; i<arr.size();i++){
    res = res ^ arr[i];
  }
  return res;
}
int main(){
  cout<<"enter the size of the array you want"<<endl;
  int n;
  cin>>n;
  vector<int> arr(n);
  cout<<"enter the elements of the array"<<endl;
  for (int i= 0; i<arr.size(); i++){
    cin>>arr[i];
  }
  cout<<"finding the unique element in the array"<<endl;
  int element = findUnique(arr);
  cout<<"the unique element in the array is "<<element<<endl;
  return 0;
}


// union of two arrays
// given two arrays find their union


#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<int> arr1{1, 2, 3, 4};
  vector<int> arr2{4, 5, 6, 7};
  vector<int> result;
  for (int i = 0; i < arr1.size(); i++) {
    result.push_back(arr1[i]);
  }
  for (int i = 0; i < arr2.size(); i++) {
    result.push_back(arr2[i]);
  }
  for (int i = 0; i < result.size(); i++) {
    cout << result[i] << " ";
  }
}

// in the above union we are getting repeated digits
// correcting the above code

//[1,2,5,3,4,5,5,5,5,4,5,6,7,5,5]
//1 - [1,2,5,3,4,5,5,5,5,4,5,6,7,5,5]
//2 - [1,2,5,3,4,5,5,5,5,4,5,6,7,5,5]
//5 - [1,2,5,3,4,min,min,min,min,4,min,6,7,min,min]
//3 - [1,2,5,3,4,min,min,min,min,4,min,6,7,min,min]
//4 - [1,2,5,3,4,min,min,min,min,min,min,6,7,min,min]


#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main(){
  vector<int>arr{1,2,5,3,4,5,5,5,5,4,5,6,7,5,5};
  vector<int>result;
  for(int i = 0; i<arr.size();i++){
    for (int j = i+1; j< arr.size(); j++){
      if(arr[i] == arr[j]){
        arr[j] = INT_MIN;
      }
    }
  }
  for (int i = 0; i <arr.size();i++){
    if(arr[i]!= INT_MIN){
      result.push_back(arr[i]);
    }
    
  }
  for (int i = 0; i <result.size();i++){
    cout<<result[i]<<" ";
  }
}



// given two arrays find their intersection


#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector<int> arr1{1,2,3,4,5,6};
  vector<int> arr2{5,6,7,8};
  vector<int>result;
  for (int i = 0; i <arr1.size();i++){
    for(int j= 0; j< arr2.size();j++){
      if(arr1[i]==arr2[j]){
        arr2[j] = -1;
        result.push_back(arr1[i]);
      }
    }
  }
  for (int i = 0; i < result.size();i++){
    cout<<result[i]<<" ";
  }
return 0;
}


//par sum 
//find the pair that provides the given sum 

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main(){
  vector<int>arr{1,3,5,7,2,4,6};
  cout<<"what is the sum you want"<<endl;
  int n;
  cin>>n;
  int sum = n;
  for(int i = 0; i<arr.size();i++){
    for (int j = i+1;j<arr.size();j++){
      if(arr[i]+arr[j] == sum){
        cout<<"the required pair is"<<arr[i]<<","<<arr[j]<<endl;
      }
    }
  }
}


//triplet sum 

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main(){
  cout<<"enter the sum you want"<<endl;
  int n;
  cin>>n;
  int sum = n;
  vector<int>arr{1,3,5,7,2,4,6};
  for (int i = 0; i< arr.size(); i++){
    for(int j = i+1; j<arr.size();j++){
      for(int k = j+1; k<arr.size();k++){
        if(arr[i]+arr[j]+arr[k] == sum){
          cout<<"the required pair "<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
        }
      }
    }
  }
}


//DUTCH NATIONAL FLAG PROBLEM 
#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;
int main(){
  vector<int>arr{0,1,0,0,0,1,1,0,0,0,1,0,1,1};
  int start = 0;
  int end = arr.size()-1;
  int i = 0;
  while (start!=end){
    if(arr[i] == 0){
      swap(arr[start], arr[i]);
      i++;
      start++;
    }
    if(arr[i] == 1){
      swap(arr[i],arr[end]);
      end--;
    }
  }
  for(int i = 0; i<arr.size();i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}