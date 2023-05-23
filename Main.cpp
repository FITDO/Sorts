#include <iostream>

#include "Functions/Functions.h"

#include "BubbleSort/BubbleSorter.h"
#include "InsertionSort/InsertionSorter.h"
#include "QuickSort/QuickSorter.h"

int main ()
{

    srand (time(NULL));

    BasicSorter <int> * bs[4];

    bs[0] = new BubbleSorter <int> ();
    bs[1] = new InsertionSorter <int> ();
    bs[2] = new QuickSorter <int> ();

    const int arraySize = 1000;
    int baseArry[arraySize] = {};

    FillArray (baseArry , arraySize);

    int sortArray[arraySize];

    std::cout << "Unsorted Array of " << arraySize << " size: " << ArrayToString (baseArry , arraySize) << "\n";
    
    for (BasicSorter <int> * sorter : bs)
    {
        CopyArray (sortArray , baseArry , arraySize);
        sorter->Sort (sortArray , arraySize);
        std::cout << sorter->GetName() << ":\nTime (ns): " << sorter->GetSortTime() << "\n";
    }

    return 0;
}