#ifndef _BASICSORTER_H_
#define _BASICSORTER_H_

#include <chrono>
#include <string>

/**
 * CLASS: BasicSorter
 * PURPOSE: Provide basic functionality for sorts.
 * All sorters will be used in the same way.
*/
template <typename T>
class BasicSorter
{
private:

    // variables

    // name of the sort
    std::string sortName;

    // time in nanoseconds it took to finish the sort
    int sortTime;

protected:

    // Constructor with string for name
    BasicSorter (std::string name);

    // Deconstructor
    ~BasicSorter (void);


    /**
     * FUNCTION: SortArray
     * PURPOSE: Defined by child classes to sort array with different algorithms
    */
    virtual void SortArray (T arr[] , int size) = 0;

    /**
     * FUNCTION: Swap
     * PURPOSE: Swaps the values of two elements in an array
    */
    void Swap (T * x , T * y);

public:

    // Type of elements in the array
    typedef T type;

    /**
     * FUNCTION: GetName
     * PURPOSE: Returns the name of the sort
    */
    std::string GetName (void);

    /**
     * FUNCTION: Sort
     * PURPOSE: Sorts an arry of an inputed size. Returns the time in nanoseconds
     * it took to sort the array
    */
    int Sort (T arr[] , int size);

    /**
     * FUNCTION: GetSortTime
     * PURPOSE: Returns the sort time it took to sort an array. If hasn't been used
     * will return 0
    */
    int GetSortTime (void);

};

#include "BasicSorter.cpp"

#endif