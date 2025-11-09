/**
 * @param {number[]} arr
 * @return {boolean}
 */
var validMountainArray = function(arr) {
   let i=0;
   if(arr.length<3) return false;
   while(i<arr.length-1 && arr[i]<arr[i+1]){
    i++;
   }
   if(i==0) return false;
   if(i==arr.length-1) return false;
   while(i<arr.length-1 && arr[i]>arr[i+1]){
    i++;
   }
   if(i==arr.length-1) return true;
   else return false;
};