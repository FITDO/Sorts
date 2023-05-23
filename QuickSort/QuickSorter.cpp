
// Constructor
template <typename T>
QuickSorter <T> :: QuickSorter (void)
: BasicSorter <T> ("Quick Sort")
{

}

// Deconstructor
template <typename T>
QuickSorter <T> :: ~QuickSorter (void)
{
    
}

template <typename T>
void QuickSorter <T> :: SortArray (T arr[] , int size)
{
    // Simple Call to begin the quick sort
    this->QuickSort (arr , 0 , size);
}

template <typename T>
void QuickSorter <T> :: QuickSort (T arr[] , int low , int high)
{
    // Safty Check
    if (low < high)
    {
        // Break up the array
        int pi = this->Partition (arr , low , high);

        // Sort Both Sides
        this->QuickSort (arr , low , pi - 1);
        this->QuickSort (arr , pi + 1 , high);
    }
}

template <typename T>
int QuickSorter <T> :: Partition (T arr[] , int low , int high)
{
    // Creates a pivot
    int pivot = arr[high];

    int index = (low - 1);

    // Sort through each index given
    for (int i = low ; i < high ; i++)
    {
        if (arr[i] < pivot)
        {
            index++;
            this->Swap (&arr[index] , &arr[i]);
        }
    }

    // Swap elements
    this->Swap (&arr[index + 1] , &arr[high]);

    return (index + 1);
}