/**
 * @param {number[]} arr
 * @return {number[]}
 */
var replaceElements = function(arr) {
  let max=-1;
  let n=arr.length;
  let i=n-1;
  while(i>=0){
    temp=arr[i];
    arr[i]=max;
    if(temp>max){
        max=temp;
    }
    i--;
  }
  return arr;
};