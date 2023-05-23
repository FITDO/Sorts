#include "../Functions/Functions.h"
#include "RandomSorter.h"

// Run the Random Sort

int main ()
{
    srand (time(NULL));

    RandomSorter <int> * sorter = new RandomSorter <int> ();
    const int size = 9;

    RunSorter (sorter , size);

    return 0;
}