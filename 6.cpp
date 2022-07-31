#include <iostream>
using namespace std;

int main() {

  int low, high, i, flag =0;
  
  cout << "Enter two numbers (intervals): ";
  cin >> low >> high;
  while (low < high) {
    flag = 0;

    // 0 and 1 are not prime numbers
    if (low == 0 || low == 1) {
      cout<<"not prime";
    }
 
    for (i = 2; i <= low/2; ++i) {
      if (low % i == 0) {
        flag=1;
        break;
      }
    }
        
    if (flag == 0)
      cout << low << ", ";

    ++low;
  }

  return 0;
}
