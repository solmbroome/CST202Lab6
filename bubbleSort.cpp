///////////////////////////////////////////////////////////////////////////////
//File Name: bubbleSort.h
//Programmer: Scott Olmstead, Caleb Donovick, Sharon Smalls-Williams
///////////////////////////////////////////////////////////////////////////////

#include "bubbleSort.h"

///////////////////////////////////////////////////////////////////////////////
// Name: BubbleSort
// Author: [Scott Olmstead] - Caleb Donovick
// Description:
///////////////////////////////////////////////////////////////////////////////
void BubbleSort(int dataArray[], int length)
{
    int iteration;
    int index;
    int tempInt;

    for (iteration = 1; iteration < length; iteration++)
    {
        for (index = 0; index < length - iteration; index++)
        {
            if(dataArray[index] > dataArray[index + 1])
            {
                tempInt = dataArray[index];
                dataArray[index] = dataArray[index + 1];
                dataArray[index + 1] = tempInt;
            }
        }
    }
}