///////////////////////////////////////////////////////////////////////////////
//File Name: selectionSort.h
//Programmer: Caleb Donovick, Sharon Smalls-Williams, and Scott Olmstead
//Brief Description: Contains the function prototypes for the selection sort
//                    implementation.
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