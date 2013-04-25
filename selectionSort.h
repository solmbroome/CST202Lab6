///////////////////////////////////////////////////////////////////////////////
//File Name: selectionSort.h
//Programmer: Scott Olmstead, Caleb Donovick, Sharon Smalls-Williams
///////////////////////////////////////////////////////////////////////////////
#ifndef selectionSort_h
#define selectionSort_h

#include "standard.h"

int MinLocation(int dataArray[], int first, int last);

void Swap(int dataArray[], int first, int second);

void SelectionSort(int dataArray[], int length);

#endif