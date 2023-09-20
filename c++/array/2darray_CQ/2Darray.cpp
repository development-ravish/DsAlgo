// creation of the 2d array and accessing elements row wise
/*
#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;
int main(){
  //declaring a 2d array
  int arr[3][3];
  //intialising a 2d array
  int brr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
  int row = 3;
  int col = 3;
  for(int i = 0; i<row; i++){
    for(int j = 0; j<col; j++){
      cout<<brr[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
*/

// taking user inpit in row wise way
/*
#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;
int main(){
  cout<<"enter how many rows you want"<<endl;
  int row;
  cin>>row;
  cout<<"enter how many cols you want"<<endl;
  int col;
  cin>>col;
  int arr[row][col];
  cout<<"lets enter the array elements"<<endl;
  for(int i = 0; i<row; i++){
    for(int j = 0; j<row; j++){
      cin>>arr[i][j];
    }
  }
  for(int i = 0; i<row; i++){
    for(int j = 0; j<row; j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
*/

// sum of all the elements of a 2 d array, take input from the user
/*
#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;
int main(){
  cout<<"enter the number of columns"<<endl;
  int cols;
  cin>>cols;
  cout<<"enter the number of rows"<<endl;
  int rows;
  cin>>rows;
  int arr[rows][cols];
  cout<<"enter the elements of the array"<<endl;
  for(int i = 0; i<rows;i++){
    for(int j = 0; j<cols;j++){
      cin>>arr[i][j];
    }
  }
  cout<<"printing the 2d array entered"<<endl;
  for(int i = 0; i<rows;i++){
    for(int j = 0; j<cols;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<"getting the sum of all the elements of the 2d array"<<endl;
  int sum = 0;
  for(int i = 0; i<rows;i++){
    for(int j = 0; j<cols;j++){
      sum = sum+arr[i][j];
    }
  }
  cout<<"the required sum is"<<sum<<endl;

}
*/

// LINEAR SEARCH
// find if the element is present in the 2d array or not
/*
#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;
int main(){
  int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
  cout<<"which element you want to search in 2D array"<<endl;
  int element;
  cin>>element;
  int flag = 0;
  for(int i = 0; i<3;i++){
    for(int j = 0; j<3; j++){
      if(arr[i][j]==element){
        flag = 1;
      }
    }
  }
  if(flag ==1){
    cout<<"the required element exists in the 2d array"<<endl;
  }
  else{
    cout<<"the element does not exist"<<endl;
  }
}
*/

// constructing a dyanamic 2d array
/*
#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;
int main(){
  vector<int>a{1,2,3};
  vector<int>b{4,5,6};
  vector<int>c{7,8,9};
  vector<vector<int> > res;
  res.push_back(a);
  res.push_back(b);
  res.push_back(c);
  for(int i = 0; i<res[0].size();i++){
    for(int j = 0; j<res[i].size();j++){
      cout<<res[i][j]<<" ";
    }
    cout<<endl;
  }

  return 0;
}
*/

// we declare a 2d vector like
// vector<vector<int> >arr;

// another way of declaring the 2d dyanamic array in c++
// this is a bit direct and complicated method
// vector<vector<int> >arr(rows, vector<int>(col,0))

// vector<vector<int> >arr(rows,vector<int>(col,0));

// vector<vector<int> >arr(rows, vector<int>(col,0));

// decraling a 2d array of zeros where we will take user input //regaridng the
// size of the array
/*
#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;
int main (){
  cout<<"enter how many rows you want"<<endl;
  int row;
  cin>>row;
  cout<<"enter the columns you want"<<endl;
  int col;
  cin>>col;
  cout<<"initializing the required 2d array of zeros with the required
dimensions"<<endl; vector<vector<int> >arr(row,vector<int>(col,0));
  cout<<"printing the required values"<<endl;
  for(int i = 0; i<arr[0].size();i++){
    for(int j = 0; j<arr[i].size();j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

  return 0;
}
*/
