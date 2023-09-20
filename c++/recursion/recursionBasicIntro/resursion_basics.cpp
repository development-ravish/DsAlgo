//RECURSION BASIC INTRO

//Forward Counting 
/*
#include <iostream>
#include <vector>
using namespace std;
void forwardCount(int n){
  //base case
  if(n == 0){
    return;
  }
  if(n<0){
    return;
  }
  forwardCount(n-1);
  cout<<n<<" ";
}
int main(){
  cout<<"enter the number until which you want a fwd counting "<<endl;
  int n;
  cin>>n;
  forwardCount(n);
  return 0;
}
*/
/*
//Backward Counting 
#include <iostream>
#include <vector>
using namespace std;
void forwardCount(int n){
  //base case
  if(n == 0){
    return;
  }
  if(n<0){
    return;
  }
  cout<<n<<" ";
  forwardCount(n-1);
}
int main(){
  cout<<"enter the number until which you want a fwd counting "<<endl;
  int n;
  cin>>n;
  forwardCount(n);
  return 0;
}
*/

//Factorial 
/*
#include <iostream>
#include <vector>
using namespace std;
int factorial(int n){
  //base case
  if(n == 0){
    return 1;
  }
  if(n == 1){
    return 1;
  }
  if(n<0){
    return 0;
  }
  int res = n * factorial(n-1);
  return res;
}
int main(){
  cout<<"enter the number whose factorial value you want "<<endl;
  int n;
  cin>>n;
  int ans = factorial(n);
  cout<<"the required factorial value is: "<<ans<<endl;
  return 0;
}
*/

//Fibo
/*
#include <iostream>
using namespace std;
int fibo(int n){
  //base case
  //first term in fibo series is 0
  if(n == 1){
    return 0;
  }
  //second term in the fibo series is 1
  if(n == 2){
    return 1;
  }
  int ans = fibo(n-1)+fibo(n-2);
  return ans;
}
int main(){
  cout<<"enter which term of fibo seq you want "<<endl;
  int n;
  cin>>n;
  int res = fibo(n);
  cout<<"the req. result is "<<res<<endl;
}
*/

