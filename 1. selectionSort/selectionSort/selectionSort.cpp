// selectionSort.cpp : Defines the entry point for the console application.

// For SMALL ARRAYS (less than 20-30 elements),
// both insertion sort and selection sort are typically faster than the O(n*logn) alternatives.


// One advantage of selection sort over insertion sort,
// is that the number of writes (swaps) is in O(n), 
// while in insertion sort it is in O(n^2). 
// This may be important if you are sorting on Flash memory, 
// for example, because writes reduce the lifespan of Flash memory.

//USES:
//Minimum number of swaps while sorting the array

#include "stdafx.h"
#include <iostream>



int printArray(int *k, int arr_length) {
	int i = 0;
	for (i = 0; i < arr_length; i++) {
		std::cout << *k << " ";
		k++;
	}
	return 0;
}

int getIndex(int *p, int value, int arr_length) {
	int i = 0;
	for (; i < arr_length; i++) {
		if (*p == value) {
			return i;
		}
		p++;

	}
}

int getSmallest(int *p, int current_index, int length) {

	int temp = *p;

	for (; current_index < length; current_index++) {
		//cout<<current_index;
		//std::cout << "  " << *p;
		if (*p < temp)
			temp = *p;
		p++;
	}
	return temp;
}



int main()
{
	
	int arr[] = { 5,4,8,6,10,9,11,15 };
	int i = 0;
	int arr_length = 8;
	int swap_counter = 0;
	//k = getSmallest(arr, 1, 8);
	//std::cout << "\n" << getSmallest(&arr[4], 4, 8);
	int temp = 0;
	int index = 0;
	for (i = 0; i < arr_length; i++) {
		temp = getSmallest(&arr[i], i, arr_length);
		index = getIndex(arr, temp, arr_length);
		if (arr[i] != temp) {
			arr[index] = arr[i];
			arr[i] = temp;
			swap_counter++;

		}
			
		/*if (arr[i] < temp) {
			arr[index] = arr[i];
			arr[i] = temp;

			swap_counter++;
		}*/
	}
	printArray(arr, arr_length);



//TESTING FUNCTIONS 
/*
	for (int i = 0; i < arr_length; i++) {
		std::cout<<getSmallest(&arr[i], i, arr_length)<<" ";


	}
	std::cout << "\n";
	for (int i = 0; i < arr_length; i++) {
		int temp = getSmallest(&arr[i], i, arr_length);

		std::cout << getIndex(arr, temp, arr_length)<<" ";


	}*/


	system("pause");
	return 0;
}

