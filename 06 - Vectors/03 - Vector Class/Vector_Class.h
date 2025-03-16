template <typename T>

class Vector {

  // Data Members

  T *arr; // pointer to an array
  int cs; // current size
  int ms; // maximum size

public:
  Vector(int max_size = 1) {
    cs = 0;          // Innitally current size is 0
    ms = max_size;   // Innitally maximum size is 1
    arr = new T[ms]; // Dynamically allocating memory to the array where size
                     // is 1(ms)
  }

  void push_back(const T data) {
    // Two Cases
    if (cs == ms) {
      // Create a new array and delete the old one. And double the capacity of
      // the new array.

      T *oldArray = arr;
      ms = 2 * ms;
      arr = new T[ms]; // Double the size of the array

      // copy the elements from the old array to the new array
      for (int i = 0; i < cs; i++) {
        arr[i] = oldArray[i];
      }

      // Delete the old array

      delete[] oldArray;
    }

    arr[cs] = data;
    cs++;
  }

  void pop_back() {
    if (cs >= 0) {
      cs--;
    }
  }

  bool isEmpty() const {
    return cs == 0; // If current size is 0 then return true else false
  }

  // Front, Back, At(i), size, capacity, operator overloading []

  T front() const { return arr[0]; }

  T back() const {
    return arr[cs - 1]; // cs-1 is the last element of the array
  }

  T at(int i) const {
    // return the element at the ith index
    return arr[i];
  }

  int size() const {
    // return the number of elements in the array
    return cs;
  }

  int capacity() const {
    // return the maximum size of the array
    return ms;
  }

  T operator[](const int i) const { return arr[i]; }
};

// Points to remember
// 1. use const when we don't change the parameters like i++ or i--
// 2. use const function when we don't change the data members of the class
// that means the function is not going to change the data members of the
// class
// 3. In push_back function we are not using const because we are modifying
// the array
// 4. In pop_back function we are not using const because we are modifying the
// cs (cs--)
// i. If we modify the data members of the class that use const the compiler
// will give an error message !!!!
//  These are good practices to follow