///////////////////////////////////////////////////////////////////////////////
//File Name: bubbleSort.cpp
//Programmer: Caleb Donovick, Sharon Smalls-Williams, and Scott Olmstead
//Brief Description: Contains the function definitions for the bubble sort
//                    implementation
///////////////////////////////////////////////////////////////////////////////

#include "bubbleSort.h"

///////////////////////////////////////////////////////////////////////////////
// Name: BubbleSort
// Author: Scott Olmstead
// Description: Performs a bubble sort: iterates through all indexes of an 
//               integer array, comparing the current position with the next 
//               position. If the next position is smaller than the current
//               positions, the positions are swapped, and the next adjacent
//               indexes are compared. Also counts the number of comparisons 
//               and swaps that occur during this process and stores the
//               results in reference variables.
///////////////////////////////////////////////////////////////////////////////
void BubbleSort(int dataArray[],
                int length,
                int& comparisonCount,
                int& swapCount)
{
    int iteration;
    int index;
    int tempInt;

    //Initialize the comparisonCount to zero
    comparisonCount = 0;

    //Initialize the swap count to zero
    swapCount = 0;

    //Go through all the indexes of the array.
    for (iteration = 1; iteration < length; iteration++)
    {
        //Go through the remaining indexes of the array, after
        // the current iteration
        for (index = 0; index < length - iteration; index++)
        {
            //If this position is greater than the next position
            if(dataArray[index] > dataArray[index + 1])
            {
                //Swap this position to the next position
                tempInt = dataArray[index];
                dataArray[index] = dataArray[index + 1];
                dataArray[index + 1] = tempInt;

                //Iterate the swap count, for a swap occurred
                swapCount++;
            }

            //Iterate the comparison count, because a comparison
            // within the array occurred 
            comparisonCount++;
        }
    }
}