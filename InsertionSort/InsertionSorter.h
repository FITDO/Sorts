#ifndef _INSERTIONSORTER_H_
#define _INSERTIONSORTER_H_

#include "../BasicSort/BasicSorter.h"

/**
 * CLASS: InsertionSorter
 * PURPOSE: Sort an Array with the Insertion Sort Algorithm
*/
template <typename T>
class InsertionSorter : public BasicSorter <T>
{
protected:

    // Implementation of the Insertion Sort
    void SortArray (T arr[] , int size);

public:

    // Default Constructor
    InsertionSorter (void);

    // Deconstructor
    ~InsertionSorter (void);

};

#include "InsertionSorter.cpp"


#endif