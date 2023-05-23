#ifndef _QUICKSORTER_H_
#define _QUICKSORTER_H_

#include "../BasicSort/BasicSorter.h"

/**
 * CLASS: QuickSorter
 * PURPOSE: Sort an Array with the Quick Sort Algorithm
*/
template <typename T>
class QuickSorter : public BasicSorter <T>
{
protected:

    // Sorts the Array
    void SortArray (T arr[] , int size);

    // Used to impliment the Quick Sort Algorithm
    void QuickSort (T arr[] , int low , int high);

    // used to 'break' the array into smaller pieces
    int Partition (T arr[] , int low , int high);

public:

    // Default Constructor
    QuickSorter (void);

    // Deconstructor
    ~QuickSorter (void);

};

#include "QuickSorter.cpp"

#endif