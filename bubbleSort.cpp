///////////////////////////////////////////////////////////////////////////////
//File Name: bubbleSort.h
//Programmer: Caleb Donovick, Sharon Smalls-Williams, Scott Olmstead
//Brief Description: This cpp files contains the functions for bubbleSort.h
///////////////////////////////////////////////////////////////////////////////

#include "bubbleSort.h"

///////////////////////////////////////////////////////////////////////////////
// Name: BubbleSort
// Author: Scott Olmstead
// Description:
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