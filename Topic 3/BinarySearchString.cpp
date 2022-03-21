//Daniel Blakeman
//CIS 2201 502
//Implement the binarySearch algorithm for an array of strings

#include<string>
#include<iostream>
#include "binarySearchString.h"

int BinarySearchString::binarySearch(const string anArray[], int first, int last, string target)
{
	int index = 0;
	if (first > last)
		index = -1; // target not in original array 
	else
	{
		// If target is in anArray, anArray[first] <= target <= anArray[last]
		int mid = first + (last - first) / 2;
		if (target == anArray[mid])
		{
			index = mid; // target found at anArray[mid]
		}
			
		else if (target < anArray[mid])
		{
			// Point X
			index = binarySearch(anArray, first, mid - 1, target);
		}
			
		else
		{
			// Point Y
			index = binarySearch(anArray, mid + 1, last, target);
		}
			
	}	//end if
	return index;
}	// end binarySearch