#include <stdio.h>

int binarySearch(int list[], int size, int value)
{
    int lo = 0;
    int hi = size;
    do
    {
        int m = lo + (hi - lo) / 2;
        int v = list[m];
        printf("%d:%d\n",m,v);
        if (v == value)
            return m;
        else if (v > value)
            hi = m;
        else
            lo = m + 1;
    } while (lo < hi);
    return -1;
}

int main()
{
    int myList[] = {50, 125, 175, 205, 225, 275, 305};
    int myNumber = 2205;
    int indx = binarySearch(myList, sizeof(myList) / sizeof(myList[0]), myNumber);
    printf("The index of the search value is: %d\n",indx);
    return 0;
}