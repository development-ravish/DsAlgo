// Very Basic Pointer

/*
#include <iostream>
#include <vector>
using namespace std;
int main(){
  int a = 5;
  int* ptr = &a;
  cout<<"the value of var a is "<<a<<endl;
  cout<<"the address of var a is "<<&a<<endl;
  cout<<"the address stored in pointer ptr "<<ptr<<endl;
  cout<<"the value of address stored in pointer ptr "<<*ptr<<endl;
  cout<<"the address of ptr pointer "<<&ptr<<endl;
  return 0;
}
*/

// not a good practice of decaring pointer

/*
#include <iostream>
#include <vector>
using namespace std;
int main(){
  int a = 5;
  //no idea where this pointer will pont to
  //this way the pointer is pointing to any arbitratay memoriy location
  //either we get a garbage value or we get segmentation fault error
  //avoid initialising pointers like this
  //always initialise the pointer with some valid memory address
  //if you do not know what memory address should the pointer points to then
simply initialise the ponter with 0 such a pointer is also called as null
pointer int *ptr; cout<<"the value of var a is "<<a<<endl; cout<<"the address of
var a is "<<&a<<endl; cout<<"the address stored in pointer ptr "<<ptr<<endl;
  cout<<"the value of address stored in pointer ptr "<<*ptr<<endl;
  int* p = 0;
  cout<<"the address pointer p is pointing to "<<p<<endl;
  cout<<"the value stored at the address where pointer p is pointing
"<<*p<<endl; return 0;
}
*/

// Pointer Arithmatic
// Pointer copying another pointer

/*
#include <iostream>
#include <vector>
using namespace std;
int main(){
  int a = 5;
  int* ptr1 = &a;
  int* ptr2 = ptr1;
  cout<<"value of variable a "<<a<<endl;
  cout<<"address of variable a "<<&a<<endl;
  cout<<"address pointer ptr1 is pointing "<<ptr1<<endl;
  cout<<"address pointer ptr2 is pointing"<<ptr2<<endl;
  cout<<"value of ptr1 pointing address "<<*ptr1<<endl;
  cout<<"value of ptr2 pointing address "<<*ptr2<<endl;
  return 0;
}
*/
