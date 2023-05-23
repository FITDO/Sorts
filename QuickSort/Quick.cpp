#include "../Functions/Functions.h"
#include "QuickSorter.h"

// Run the Quick Sort

int main ()
{
    srand (time(NULL));

    QuickSorter <int> * sorter = new QuickSorter <int> ();
    const int size = 75;

    RunSorter (sorter , size);

    return 0;
}