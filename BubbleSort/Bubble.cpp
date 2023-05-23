#include "../Functions/Functions.h"
#include "BubbleSorter.h"

// Run the Bubble Sort

int main ()
{
    srand (time(NULL));

    BubbleSorter <int> * sorter = new BubbleSorter <int> ();
    const int size = 75;

    RunSorter (sorter , size);

    return 0;
}