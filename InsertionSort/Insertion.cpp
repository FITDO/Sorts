#include "../Functions/Functions.h"
#include "InsertionSorter.h"

// Run the Insertion Sort

int main ()
{
    srand (time(NULL));

    InsertionSorter <int> * sorter = new InsertionSorter <int> ();
    const int size = 75;

    RunSorter (sorter , size);

    return 0;
}