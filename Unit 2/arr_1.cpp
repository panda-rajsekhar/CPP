/*
An array in C++ is a derived data type which is used to store multiple values of similar data type in a contiguous memory location.

The syntax to create an array is: data_type array_name[size];

Once the array is declared, the size cannot be changed.

For example: int array[5]; will create an array with the name `array` and can store 5 integers.

Initialization means assigning initial values to the array elements.

We can initialize an array with the help of `{}`.

For example: int arr[5] = {1, 2, 3, 4, 5}; & the elements are separated by a comma.

These values will be assigned sequentially, meaning index 0 for the first element and index (n-1) for the array with n elements.

When the number of elements entered in the array is less than the defined size, it's called a **partially initialized array**.

Elements entered can be fewer, but never more than the declared size.

All the elements of the array can be declared zero at once as in: `int arr[5] = {0};`

How to access the elements of the array:

Elements of an array can be easily accessed by their position in the sequence, which are called indices.

To access an element, we just need to use the array name and the index or position of that element as: array_name[index]

Below is a simple example of array declaration and accessing a particular element of the array:
*/



#include <iostream>
using namespace std;

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	// assume that i need to print say 6 
	// then i will refer to the index 5 for the 6th element 
	cout<<arr[5]<<endl;
	// then i have a change in mind and i want to access 1st element 
	// now i will refer to index 0
	cout<<arr[0];
	return 0;
}
