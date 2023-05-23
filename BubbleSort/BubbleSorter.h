#ifndef _BUBBLESORTER_H_
#define _BUBBLESORTER_H_

#include "../BasicSort/BasicSorter.h"

/**
 * CLASS: BubbleSorter
 * PURPOSE: Sort an Array with the Bubble Sort Algorithm
*/
template <typename T>
class BubbleSorter : public BasicSorter <T>
{
protected:

    // Implimentation of the Bubble Sort
    void SortArray (T arr[] , int size);
    
public:

    // Default Constructor
    BubbleSorter (void);

    // Destructor
    ~BubbleSorter (void);

};

#include "BubbleSorter.cpp"

#endif