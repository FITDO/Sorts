
// Constructor
template <typename T>
InsertionSorter <T> :: InsertionSorter (void)
: BasicSorter <T> ("Insertion Sort")
{

}

// Deconstructor
template <typename T>
InsertionSorter <T> :: ~InsertionSorter (void)
{

}

template <typename T>
void InsertionSorter <T> :: SortArray (T arr[] , int size)
{
    int key;
    int j;
    // Iterate Through Array
    for (int i = 1 ; i < size ; i++)
    {
        // create a key for sorting
        key = arr[i];
        j = i - 1;

        while (key < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        
        arr[j + 1] = key;
    }
}