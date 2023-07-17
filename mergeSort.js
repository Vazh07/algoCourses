function merge(left, right) {
  const merged = [];
  let i = 0;
  let j = 0;
  while (i < left.length && j < right.length) {
    if (left[i] <= right[j]) {
      merged.push(left[i]);
      i++;
    } else {
      merged.push(right[j]);
      j++;
    }
  }
  while (i < left.length) {
    merged.push(left[i]);
    i++;
  }
  while (j < right.length) {
    merged.push(right[j]);
    j++;
  }
  return merged;
}

const mergeSort = (list) => {
  //Divde and Conquer
  if (list.length < 2) return list;
  const middleIndx = (list.length / 2) | 0;
  const lParts = [list.slice(0, middleIndx), list.slice(middleIndx)];
  const lSorted = mergeSort(lParts[0]);
  const rSorted = mergeSort(lParts[1]);
  return merge(lSorted, rSorted);
};

console.log(mergeSort([45, 10, 1, 25, 125, 12, 5, 7, 6, 8, 945, 200, 3]));
