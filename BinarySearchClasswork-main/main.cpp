#include <iostream>
// Binary Search in C++

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int binarySearch(int array[], int x, int low, int high) {
  // return -1 if not found, otherwise return the index of found
  //  Repeat until the pointers low and high meet each other
  while (low < high) {
    int mid = low + (high - low) / 2;
    if (array[mid] == x)
      return mid;
    if (array[mid] < x)
      low = mid + 1;
    else
      high = mid - 1;
  }
  return -1;
}
int linearSearch(int array[], int x, int n) {
  // return -1 if not found, otherwise return the index of found
  for (int i = 0; i < n; ++i) {
    if (array[i] == x)
      return i;
  }
  return -1;
}
// a function to create random dataset of given size
int *getList(int size) {
  int *arr = new int[size];
  int j = 0;
  srand((unsigned)time(NULL));

  for (int i = 0; i < size; ++i) {
    int random = 1 + (rand() % 2000); // int random = offset + (rand() % range);
    arr[i] = random;
  }
  return arr;
}
// test the runtime of binary search
void test_binarySearch(int array[], int x, int n) {
  // Get starting timepoint
  auto start = high_resolution_clock::now();
  int result = binarySearch(array, x, 0, n);
  if (result == -1)
    cout << "Not found\n";
  else
    cout << "Element is found at index " << result << endl;
  // Get ending timepoint
  auto stop = high_resolution_clock::now();
  // Get duration, cast it to proper unit use duration cast method
  auto duration = duration_cast<nanoseconds>(stop - start);
  cout << "Time taken by binary search function: " << duration.count()
       << " nanoseconds" << endl;
}
// test runtime of linear search
void test_Linear_search(int array[], int x, int n) {
  // Get starting timepoint
  auto start1 = high_resolution_clock::now();
  int result = linearSearch(array, x, n);
  if (result == -1)
    cout << "Not found\n";
  else
    cout << "Element is found at index " << result << endl;
  // Get ending timepoint
  auto stop1 = high_resolution_clock::now();
  // Get duration, cast it to proper unit use duration cast method
  auto duration = duration_cast<nanoseconds>(stop1 - start1);
  cout << "Time taken by linear search function: " << duration.count()
       << " nanoseconds" << endl;
}

void run1() {
  int n = 100;             // 0000;
  int *array = getList(n); // get the new created array
  sort(array, array + n);  // default sort method of C++
  cout << "Array after sorting : \n";
  // print the array
  for (int i = 0; i < n; ++i)
    cout << "i:" << i << "=" << array[i] << " ";
  cout << "\nWhat do you want to search?\n";
  int x;
  cin >> x;
  test_binarySearch(array, x, n);
  test_Linear_search(array, x, n);
  delete[] array; // delete heap memory
}
//use this for testing big list, we will not cout elements
void run2() {
  int n = 1000000;
  int *array = getList(n); // get the new created array
  sort(array, array + n);  // default sort method of C++
  cout << "Array after sorting : \n";
  //testing for last element , test for various positions using n
  test_binarySearch(array, array[n-1], n);
  test_Linear_search(array, array[n-1], n);
  delete[] array; // delete heap memory
}

int main(void) {
  run1();
  //run2();
}