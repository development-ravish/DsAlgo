// value of an array = base_address + index_value*data_type
// whenever the arry is passes as an argument in the function always pass its
// size(no of elements in the array) also

#include <iostream>
using namespace std;

int main() {
  cout << "initializing array" << endl;
  int arr[10];
  cout << "the base address of an array is" << arr << endl;
  return 0;
}

// taking the input from the user in static array

#include <iostream>
using namespace std;
int main() {
  cout << "enter the size of the array" << endl;
  int n;
  cin >> n;
  int arr[n];
  int size = sizeof(arr) / sizeof(int);
  cout << "enter the int values only" << endl;
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }
  cout << "printing the values entered by the user" << endl;
  ;
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " " << endl;
  }
  return 0;
}

// element is present in an aray or not

#include <iostream>
using namespace std;
int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(int);
  cout << "enter the element you would like to search in an array" << endl;
  int n;
  cin >> n;
  int element = n;
  bool flag = false;
  for (int i = 0; i < size; i++) {
    if (element == arr[i]) {
      flag = true;
      break;
    }
  }
  if (flag == true) {
    cout << "yes the lement is present in an array" << endl;
  } else {
    cout << "nope the element isnt present in an array" << endl;
  }
}

// same question above but by using function

#include <iostream>
using namespace std;
bool ElementPresentOrNot(int arr[], int size, int element) {
  int flag = false;
  for (int i = 0; i < size; i++) {
    if (element == arr[i]) {
      flag = true;
      break;
    }
  }
  return flag;
}
int main() {
  cout << "please enter the element you would want to search" << endl;
  int n;
  cin >> n;
  int element = n;
  int arr[5] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(int);
  if (ElementPresentOrNot(arr, size, element)) {
    cout << "the element is present" << endl;
  } else {
    cout << "the element is not present" << endl;
  }
}

// MAX NO in an array

#include <iostream>
#include <limits.h>
using namespace std;
int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(int);
  int max = INT_MIN;
  for (int i = 0; i < size; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  cout << "the maximum no in the entered array is" << max;
}

// pretty print the array
// correspondingly printing one value from the start and end

#include <iostream>
#include <limits.h>
using namespace std;
int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(int);
  int start = 0;
  int end = size - 1;
  while (true) {
    if (start > end) {
      break;
    }
    if (start == end) {
      cout << arr[start] << " ";
    } else {
      cout << arr[start] << " ";
      cout << arr[end] << " ";
    }
    start++;
    end--;
  }

  return 0;
}

// reverse an array

#include <iostream>
#include <limits.h>
using namespace std;
int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  int start = 0;
  int size = sizeof(arr) / sizeof(int);
  int end = size - 1;
  while (start < end) {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}
