//base address of array and pointer

/*
#include <iostream>
using namespace std;
int main(){
  int arr[] = {1,2,3,4,5};
  cout<<"first way - base address of array "<<arr<<endl;
  cout<<"second way - base address of array "<<&arr<<endl;
  cout<<"third way - base address of array "<<&arr[0]<<endl;
  return 0;
}
*/

//POINTER ARITHMETIC WITH ARRAYS 

/*
#include <iostream>
#include <vector>
using namespace std;
int main(){
  int arr[] = {1,2,3,4};
  int* p = arr;
  int* q = arr+1;
  cout<<"base address "<<arr<<endl;
  cout<<"base address again "<<&arr<<endl;
  cout<<arr[0]<<endl;
  cout<<p<<endl;
  cout<<&p<<endl;
  cout<<q<<endl;
  cout<<&q<<endl;
  cout<<*q<<endl;
  cout<<*(p)+1<<endl;
  cout<<*(p+1)<<endl;
  cout<<*(q+2)<<endl;
  return 0;

*/


//we cant change the base address of the arary 
//we cant do like arr = arr+1
//because the base address is stored in the symbol table and we cant change anything there 

//CHAR ARRAYS

/*
#include <iostream>
using namespace std;
int main(){
  char ch[10] = "Ravish";
  char* chptr = ch;
  //here you see that instead of printing the address stored in the chptr poiinter it is printing the entire string to which this pointer is refering to i.e. Ravish. This happend because in c++ the cout implementation is different for int and for char
  cout<<"the address chptr is storing "<<chptr<<endl;
  //*chptr will print the first character of the string 
  //because *chptr == *(chptr + 0) == ch[0]
  cout<<"value at the address in chptr"<<*chptr<<endl;
  return 0;
}
*/

//Pointer Arithmatic with Pointers 

/*
#include <iostream>
#include <vector>
using namespace std;
int main(){
  char ch[20] = "Ravish Aggarwal";
  char* c = &ch[0];
  cout<<"this will pring the entire string "<<ch<<endl;
  cout<<"this will print the address of ch "<<&ch<<endl;
  cout<<"this will print the char i "<<*(ch+3)<<endl;
  cout<<"this will print the entire string "<<c<<endl;
  cout<<"this will print the address of the c pointer "<<&c<<endl;
  cout<<"this will print the char i"<<*(c+3)<<endl;
  cout<<"this will print the char R"<<*c<<endl;
  return 0;
  
}
*/

//what will happen if the pointer is pointing to the char variable
/*
#include <iostream>
#include <vector>
using namespace std;
int main(){
  char ch = 'k';
  char* c = &ch;
  //at this poit here it is printing the correct value ie k , but there may be scenarios where it may pring k followed by otsof garbage vaues. This usually happned because the cout will print the string until it encounters the hidden null value
  cout<<c<<endl;
  return 0;
}
*/


// there is one bad practice of initialising the pointer with the value 

/*
#include <iostream>
using namespace std;
int main(){
  char name[10] = "Ravish";
  //this is the correct way of initialising the pointer
  char* c = &name[0];
  //this is not the correct way of initialising the pointer because in this code it will initialise the c pointer but it does not know to which memory address it is pointing to and in some program if that memory address is in use then it may throw segmentation error
  char* c = "Ravish";
   
}
*/

//POINTER is passed as a reference in an array 
/*
#include <iostream>
using namespace std;
void solve(int* arr){
  cout<<"base address is "<<arr<<endl;
}
int main(){
  int arr[5] = {1,2,3,4};
  solve (arr);
  
}
*/


