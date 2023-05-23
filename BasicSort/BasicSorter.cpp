#include "BasicSorter.h"

// Constructor with name
template <typename T>
BasicSorter <T> :: BasicSorter (std::string name)
: sortTime (0) ,
  sortName (name)
{
    
}

// default deconstructor
template <typename T>
BasicSorter <T>:: ~BasicSorter (void)
{
    
}

template <typename T>
std::string BasicSorter <T> :: GetName (void)
{
    return this->sortName;
}

template <typename T>
int BasicSorter <T> :: GetSortTime (void)
{
    return this->sortTime;
}

template <typename T>
int BasicSorter <T> :: Sort (T arr[] , int size)
{
    // Get Start Time
    std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
 
    // Sort The Array
    this->SortArray (arr , size);
  
    // Get End Time
    std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

    // Get and Set the Time Difference
    this->sortTime = std::chrono::duration_cast<std::chrono::nanoseconds> (end - begin).count();

    // Return the sort time
    return this->sortTime;
}

template <typename T>
void BasicSorter <T> :: Swap (T * x , T * y)
{
    // Swap the Elements
    T holder = *x;
    *x = *y;
    *y = holder;
}