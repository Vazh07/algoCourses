#include <stdio.h>

int linearBubbleSort(int list[], int listSize)
{
    int n = listSize;
    int index = 0;
    do
    {
        int aux = list[index];
        for (int i = 0; i < n; i++)
        {
            if (aux < list[i])
            {
                list[index] = list[i];
                list[i] = aux;
                aux = list[index];
            }
        }
        index++;
        listSize--;
    } while (listSize);
}

int main()
{
    int myList[] = {45, 10, 1, 25, 125, 12, 5, 7, 6, 8, 945, 200, 3};
    int listSize = sizeof(myList) / sizeof(myList[0]);
    linearBubbleSort(myList, listSize);
    for (int i = 0; i < listSize; i++)
    {
        printf("List Element at %d: %d\n", i, myList[i]);
    }
    return 0;
}