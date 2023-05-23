#ifndef _RANDOMSORTER_H_
#define _RANDOMSORTER_H_

#include "../BasicSort/BasicSorter.h"

template <typename T>
class RandomSorter : public BasicSorter <T>
{
protected:

    void SortArray (T arr[] , int size);

    void Resort (T arr[] , int size);

public:

    RandomSorter (void);

    ~RandomSorter (void);

};

#include "RandomSorter.cpp"

#endif