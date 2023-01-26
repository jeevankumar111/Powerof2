#include <iostream>
using namespace std;

// create a class
class Array {
  // private data member
 private:
  int array[10];

  // public functions
 public:
  // getArray() function to get the value of the array
  void getArray() {
    for (int index = 0; index <= 9; index++) {
      cout << "array[" << index << "]:";
      cin >> array[index];
    }
  }

  // differenceArray() function to calculate the
  // difference between the largest and the
  // smallest number in the array
  int differenceArray() {
    // initialising int type variables to perform operations
    int index_1, index_2, temp, difference;

    // for loop to read the whole array
    for (index_1 = 0; index_1 <= 9; index_1++) {
      // for loop to compare numbers of array
      for (index_2 = 0; index_2 < 9 - index_1; index_2++) {
        // if condition to check if the next term is smaller than
        // this then swapping takes place
        if (array[index_2] > array[index_2 + 1]) {
          // swapping numbers if numbers
          // are not in the order
          temp = array[index_2];
          array[index_2] = array[index_2 + 1];
          array[index_2 + 1] = temp;
        }
      }
    }

    // calculating difference between Largest
    // and the Smallest number in the array
    difference = array[9] - array[0];

    cout << "Smallest Number: " << array[0] << " Largest Number: " << array[9]
         << endl;

    // returning the difference
    return difference;
  }
};

int main() {
  // create an object
  Array A;

  // int type variable to store the difference
  int difference;

  // calling getArray() function is called by 
  // the object to store the array
  A.getArray();

  // calling differenceArray() function to calculate difference
  // between largest and smallest number in the array
  difference = A.differenceArray();

  cout << "Difference between largest and smallest number is " << difference;

  return 0;
}
