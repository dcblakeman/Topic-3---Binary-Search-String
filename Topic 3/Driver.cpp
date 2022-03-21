//Daniel Blakeman
//CIS 2201 502
//Implement the binarySearch algorithm for an array of strings

#include<iostream>
#include<string>
#include "BinarySearchString.h"
#include<algorithm>
using namespace std;

int main()
{
	//Variables
	string anArray[] = {"apple", "baby", "cat", "dog"};
	int finalIndex = 0;

	//Sort the Array (in case it isn't already)
	sort(begin(anArray), end(anArray));

	//Constructor
	BinarySearchString search;
	finalIndex = search.binarySearch(anArray, 0, 3, "baby");

	cout << "Index: " << finalIndex;
}
