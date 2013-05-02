///////////////////////////////////////////////////////////////////////////////
//File Name: selectionSort.h
//Programmer: Caleb Donovick, Sharon Smalls-Williams, Scott Olmstead
//Brief Description: This header file contains the selectionSort 
//                   class definition.
///////////////////////////////////////////////////////////////////////////////
#ifndef selectionSort_h
#define selectionSort_h

#include "standard.h"

int MinLocation(int dataArray[], int first, int last, int& comparisonCount);

void Swap(int dataArray[], int first, int second);

void SelectionSort(int dataArray[],
                   int length,
                   int& comparisonCount,
                   int& swapCount);

#endif