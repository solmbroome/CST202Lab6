///////////////////////////////////////////////////////////////////////////////
//File Name: selectionSort.cpp
//Programmer: Caleb Donovick, Sharon Smalls-Williams, and Scott Olmstead
//Brief Description: Contains the function definitions of the selection sort
//                    implementation
///////////////////////////////////////////////////////////////////////////////
#include "selectionSort.h"

///////////////////////////////////////////////////////////////////////////////
// Name: MinLocation
// Author: Sharon Smalls-Williams
// Description: Iterates through a integer array, comparing values to
//               determine the smallest integer value. Returns that value(int).
///////////////////////////////////////////////////////////////////////////////
int MinLocation(int dataArray[], int first, int last, int& comparisonCount)
{
    int location;
    int minIndex;
    
    //Initialize the smallest index as the lower end of the search boundary
    minIndex = first;

    //Step through the rest of the indexes in the array
    for (location = first + 1; location <= last; location++)
    {
        //If this location's value is less than the smallest
        // value read so far
        if (dataArray[location] < dataArray[minIndex])
        {
            //Set the minimum value's index to this 
            // value's index
            minIndex = location;
        }

        //Iterate comparison count, for a value in the array
        // was compared to another
        comparisonCount++;
    }

    //Return the smallest value's index
    return minIndex;
}

///////////////////////////////////////////////////////////////////////////////
// Name: Swap
// Author: Sharon Smalls-Williams
// Description: Swaps the two passed positions in a given integer array.
///////////////////////////////////////////////////////////////////////////////
void Swap(int dataArray[], int first, int second)
{
    int tempInt;

    //Swap the value at the first index with the value at the second index
    tempInt = dataArray[first];
    dataArray[first] = dataArray[second];
    dataArray[second] = tempInt;
}

///////////////////////////////////////////////////////////////////////////////
// Name: SelectionSort
// Author: Sharon Smalls-Williams
// Description: Utilizes the selection sort algorithm to sort an array of
//               integer values in ascending order by iterating through a 
//               integer array, locating the index of the smallest value in
//               that array, and switching that value at the smallest index to
//               the current index and visa versa. Also counts the number of
//               comparisons and swaps that occur in this process and stores
//               the results to reference variables.
///////////////////////////////////////////////////////////////////////////////
void SelectionSort(int dataArray[],
                   int length,
                   int& comparisonCount,
                   int& swapCount)
{
    int location;
    int minIndex;

    //Initialize the swap count to zero for counting swaps
    swapCount = 0;

    //Initialize the comparison count to zero for counting comparisons
    comparisonCount = 0;

    //Step through each number of the dataArray[]
    for (location = 0; location < length; location++)
    {
        //Locate the lowest number in the array from the index
        //to length
        minIndex = MinLocation(dataArray,
                               location,
                               length-1,
                               comparisonCount);

        //Swap the value 
        Swap(dataArray, location, minIndex);

        //Increment the number of swaps, for a swap of array 
        // positions occurred.
        swapCount++;
    }
}