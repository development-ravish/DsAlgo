// DOUBLE POINTER

/*
#include <iostream>
using namespace std;
int main(){
  int a = 5;
  int* p = &a;
  int** q = &p;
  cout<<"value of var a "<<a<<endl;
  cout<<"address of var a "<<&a<<endl;
  cout<<"address pointer p is storing "<<p<<endl;
  cout<<"address of pointerp itself "<<&p<<endl;
  cout<<"value at address pointer p is pointing "<<*p<<endl;
  cout<<"address at which pointer q is pointing "<<q<<endl;
  cout<<"address of pointer q itself "<<&q<<endl;
  cout<<"value at which pointer q is pointing "<<*q<<endl;
  cout<<"value of var a via q pointer "<<**q<<endl;
  return 0;

}
*/

// Pointer is passes as a value not reference

/*
#include <iostream>
using namespace std;
void util(int* p){
  //if we change in *p then it will reflect in the orignal
  *p = *p+1;
  //if we update the value of pointer in the function then it wont affect the
orignal p = p+1;
  //cout<<"address of pointer in func "<<&p<<endl;
  //cout<<"value at address pointer p is pointing in func "<<*p<<endl;
}
int main(){
  int a = 5;
  int* p = &a;
  cout<<"value of a "<<a<<endl;
  cout<<"address of pt p "<<&p<<endl;
  cout<<"address to what pt p points to "<<p<<endl;
  cout<<"value at address that pt p points to "<<*p<<endl;
  util(p);
  cout<<"value at address that pt p points to after func "<<*p<<endl;

}
*/

// REFERENCE VARIABLE

// calling samememory location by different names -  reference var

/*
#include <iostream>
using namespace std;
int main(){
  int a = 5;
  int& b = a;
  cout<<"value of var a "<<a<<endl;
  cout<<"value of var b "<<b<<endl;
  a++;
  cout<<"value of var a "<<a<<endl;
  cout<<"value of var b "<<b<<endl;
  b++;
  cout<<"value of var a "<<a<<endl;
  cout<<"value of var b "<<b<<endl;
  return 0;
}
*/

// usually the vars are passed as pass by value

/*
#include <iostream>
using namespace std;
void test(int a){
  a++;
  cout<<"value of the variable a inside function "<<a<<endl;
}
int main(){
  int a = 5;
  test(a);
  cout<<"value of the variable a outside function "<<a<<endl;
}
*/
// passing the variable as a pass by reference using a reference variable

/*
#include <iostream>
using namespace std;
void test(int& a){
  a++;
  cout<<"value of the variable a inside function "<<a<<endl;
}
int main(){
  int a = 5;
  test(a);
  cout<<"value of the variable a outside function "<<a<<endl;
}
*/

// usually pointers are pass by value but there is a way where we can pass
// pointers as pass by reference

/*
#include <iostream>
using namespace std;
void test(int*& p){
  p = p+1;
  cout<<"address inside the pointer p in test func"<<p<<endl;
}
int main(){
  int a = 5;
  int* p = &a;
  cout<<"address inside the pointer p  "<<p<<endl;
  test(p);
  cout<<"address inside the pointer p in main func"<<p<<endl;
}
*/
