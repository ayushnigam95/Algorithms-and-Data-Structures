// bubbleSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>



int main()
{
    
	int arr[] = { 9,8,7,6,5,4 };
	int number_of_elements = sizeof(arr) / sizeof(arr[1]);
	std::cout << number_of_elements << "\n";
	

	for (int i = number_of_elements - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1])
			{
				//swap values
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}
		}
	}
	
	//printing the array
	for (int i = 0; i < 6; i++) {
		std::cout << arr[i] << " ";
	}
	system("pause");
	
	
	
	return 0;

}

