/**
 * @param {number[]} bits
 * @return {boolean}
 */
var isOneBitCharacter = function(bits) {
   let i=0;
   while(i<bits.length-1){
    if(bits[i]==0){
        i++;
    }else if(bits[i]==1){
        i+=2;
    }
   }
   if(i==bits.length-1) return true;
   else if(i>bits.length-1)return false;

};