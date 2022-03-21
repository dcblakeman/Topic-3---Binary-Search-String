#pragma once
//Daniel Blakeman
//CIS 2201 502
//Implement the binarySearch algorithm for an array of strings

#ifndef BSEARCH_H
#define BSEARCH_H

#include<string>
#include<iostream>

using namespace std;

class BinarySearchString
{
public:
	int binarySearch(const string anArray[], int first, int last, string target);
};

#endif