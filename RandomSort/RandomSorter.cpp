
// Constructor
template <typename T>
RandomSorter <T> :: RandomSorter (void)
: BasicSorter <T> ("Random Sort")
{

}

// Deconstructor
template <typename T>
RandomSorter <T> :: ~RandomSorter (void)
{

}

template <typename T>
void RandomSorter <T> :: SortArray (T arr[] , int size)
{
    bool unsorted = true;

    int i;

    // keep going til the array is sorted
    while (unsorted)
    {
        unsorted = false;
        // check all indexs to see if the array has been sorted
        for (i = 0 ; i < size - 1 ; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                // Resort the array
                this->Resort (arr , size);

                // Check the sort again
                unsorted = true;
                break;
            }
        }
    }
}

template <typename T>
void RandomSorter <T> :: Resort (T arr[] , int size)
{
    int index;
    // Randomize the array
    for (int i = 0 ; i < size ; i++)
    {
        index = rand() % size;
        this->Swap (&arr[i] , &arr[index]);
    }
}