#include "Functions.h"

void FillArray (int arr[] , int size)
{
    // Create a new array
    const int tempArrSize = size * 3 + 1;
    int tempArr[tempArrSize] = {};

    // fill array
    for (int i = 0 ; i < tempArrSize ; i++)
    {
        tempArr[i] = i;
    }

    int index = 0;
    int holder;

    // Randomly fill the array with values from the temp array
    for (int i = 0 ; i < size ; i++)
    {
        // Generate a random index
        index = rand () % (tempArrSize - i);

        // grab data
        arr[i] = tempArr[index];

        // Move the value to the end of the array so it will not be used again
        holder = tempArr[index];
        tempArr[index] = tempArr[tempArrSize - 1 - i];
        tempArr[tempArrSize - 1 - i] = holder;
    }
}

std::string ArrayToString (int arr[] , int size)
{
    std::string strArray = "[ ";

    for (int i = 0 ; i < size ; i++)
    {
        strArray += std::to_string(arr[i]) + " ";
    }

    strArray += "]";

    return strArray;
}

void CopyArray (int copy[] , int copied[] , int size)
{
    for (int i = 0 ; i < size ; i++)
    {
        copy[i] = copied[i];
    }
}

void RunSorter (BasicSorter <int> * sorter , int size)
{
    int baseArry[size] = {};

    FillArray (baseArry , size);

    std::cout << "Unsorted Array of " << size << " size: " << ArrayToString (baseArry , size) << "\n";

    sorter->Sort (baseArry , size);
    std::cout << sorter->GetName() << ":\nTime (ns): " << sorter->GetSortTime() << "\n" << "Array: " << ArrayToString (baseArry , size) << "\n";
}