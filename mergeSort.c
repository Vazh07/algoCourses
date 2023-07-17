// void mergeSort(int list[], int size){
//     if(size<2) return list;
//     int lParts[] = middle(list, size);
//     int lSorted[] = mergeSort(lParts[0], size(lParts[0]));
//     int rSorted[] = mergeSort(lParts[1]), size(lParts[1]);
//     return merge(lSorted, rSorted);
// }

void mergeSort(int list[], int size){
    
}

int main() {
    int myList[] = {45, 10, 1, 25, 125, 12, 5, 7, 6, 8, 945, 200, 3};
    int listSize = sizeof(myList) / sizeof(myList[0]);
    mergeSort(myList, listSize);
    return 0;
}