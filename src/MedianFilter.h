#ifndef MEDIANFILTER
#define MEDIANFILTER

// https://www.geeksforgeeks.org/selection-sort/

class MedianFilter{
    private:
        int array[51] = {0};
        int sortedArray[51] = {0};

    public:
        int Filter(int);
        void selectionSort(int arr[], int n);
        void swap(int *xp, int *yp);
};

#endif