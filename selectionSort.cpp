///////////////////////////////////////////////////////////////////////////////
//File Name: selectionSort.cpp
//Programmer: Scott Olmstead, Caleb Donovick, Sharon Smalls-Williams
///////////////////////////////////////////////////////////////////////////////
#include "selectionSort.h"

///////////////////////////////////////////////////////////////////////////////
// Name: MinLocation
// Author: [Scott Olmstead] - Sharon Smalls-Williams
// Description:
///////////////////////////////////////////////////////////////////////////////
int MinLocation(int dataArray[], int first, int last)
{
    int location;
    int minIndex;

    minIndex = first;
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
// Author: [Scott Olmstead] - Sharon Smalls-Williams
// Description:
///////////////////////////////////////////////////////////////////////////////
void Swap(int dataArray[], int first, int second)
{
    int tempInt;

    tempInt = dataArray[first];
    dataArray[first] = dataArray[second];
    dataArray[second] = tempInt;
}

///////////////////////////////////////////////////////////////////////////////
// Name: SelectionSort
// Author: [Scott Olmstead] - Sharon Smalls-Williams
// Description:
///////////////////////////////////////////////////////////////////////////////
void SelectionSort(int dataArray[], int length)
{
    int location;
    int minIndex;

    for (location = 0; location < length; location++)
    {
        minIndex = MinLocation(dataArray,location,length-1);
        Swap(dataArray, location, minIndex);
    }
}