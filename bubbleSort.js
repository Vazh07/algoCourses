const bubbleSort = (list) => {
  list.forEach((element, indx) => {//Loop through the list
    list.forEach((element1, indx1) => {//Loop again to compare each time all the elements
      if (element < element1) {//If the current element
        console.log(element,'<',element1)
        list[indx] = element1;
        list[indx1] = element;
        element = element1;
      }
      console.log('Loop')
    });
    console.log(list)
  });
  //Implicit Return equals undefined
};

const list = [45, 10, 1, 25, 125, 12, 5, 7, 6, 8, 945, 200, 3];
bubbleSort(list);//Pass the list as a reference
