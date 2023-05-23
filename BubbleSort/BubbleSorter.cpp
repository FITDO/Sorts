

// Constructor with Name
template <typename T>
BubbleSorter <T> :: BubbleSorter (void)
: BasicSorter <T> ("Bubble Sort")
{
    
}

// Destructor
template <typename T>
BubbleSorter <T> :: ~BubbleSorter (void)
{
    
}

template <typename T>
void BubbleSorter <T> :: SortArray (T arr[] , int size)
{   
    // Iterate through array multiple times
    for (int i = 0 ; i < size ; i++)
    {
        for (int j = 0 ; j < size - i; j++)
        {
            // if elements are out of order swap them
            if (arr[j] > arr[j + 1])
            {
                this->Swap (&arr[j] , &arr[j + 1]);
            }
        }
    }
}

