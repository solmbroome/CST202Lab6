///////////////////////////////////////////////////////////////////////////////
//File Name: selectionSort.cpp
//Programmer: Scott Olmstead, Caleb Donovick, Sharon Smalls-Williams
//Brief Description: This cpp file contains functions for the selectionSort
//                   header.
///////////////////////////////////////////////////////////////////////////////
#include "selectionSort.h"

///!!! CLEAN UP COMMENTS, VERIFY CORRECTNESS

///////////////////////////////////////////////////////////////////////////////
// Name: MinLocation
// Author: Sharon Smalls-Williams
// Description: Search the numbers of the dataArray[] for the lowest value,
//               and return the index of that value.
///////////////////////////////////////////////////////////////////////////////
int MinLocation(int dataArray[], int first, int last)
{
    //declare variables
    int location;
    int minIndex;

    //initialize variable
    minIndex = first;

    //step through the array checking to see if any number is smaller than
	//minIndex
	//minIndex is the current first value in this part of the array
    for (location = first + 1; location <= last; location++)
    {
        if (dataArray[location] < dataArray[minIndex])
        {
            minIndex = location;
        }
    }

    return minIndex;
}

///////////////////////////////////////////////////////////////////////////////
// Name: Swap
// Author: Sharon Smalls-Williams
// Description: To swap out the numbers to the lowest one.
///////////////////////////////////////////////////////////////////////////////
void Swap(int dataArray[], int first, int second)
{
    //declare variable
    int tempInt;

    //exchange the two values
    tempInt = dataArray[first];
    dataArray[first] = dataArray[second];
    dataArray[second] = tempInt;
}

///////////////////////////////////////////////////////////////////////////////
// Name: SelectionSort
// Author: Sharon Smalls-Williams
// Description: Sort the numbers of the dataArray in ascending order.
///////////////////////////////////////////////////////////////////////////////
void SelectionSort(int dataArray[], int length, int& numberOfSwaps)
{
    //declare variables
    int location;
    int minIndex;

    //Initialize the swap value to zero
    numberOfSwaps = 0;

    //Step through each number of the dataArray[]
    for (location = 0; location < length; location++)
    {
        //Locate the lowest number in the array from the index
        //to length
        minIndex = MinLocation(dataArray,location,length-1);

        //Swap the value 
        Swap(dataArray, location, minIndex);

        //increment counter
        numberOfSwaps++;
    }
}