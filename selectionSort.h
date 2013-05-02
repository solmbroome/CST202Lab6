///////////////////////////////////////////////////////////////////////////////
//File Name: selectionSort.h
//Programmer: Caleb Donovick, Sharon Smalls-Williams, Scott Olmstead
//Brief Description: This header file contains the selectionSort 
//                   class definition.
///////////////////////////////////////////////////////////////////////////////
#ifndef selectionSort_h
#define selectionSort_h

#include "standard.h"

int MinLocation(int dataArray[], int first, int last);

void Swap(int dataArray[], int first, int second, int& numberOfSwaps);

void SelectionSort(int dataArray[], int length, int& numberOfSwaps);

#endif