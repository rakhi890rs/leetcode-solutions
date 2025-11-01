/**
 * @param {string} s
 * @return {string}
 */
var removeDuplicates = function(s) {
    let st=[];
    for(let i=0;i<s.length;i++){
        const ch=s[i];
        if(st.length>0 && st[st.length-1]===ch){
            st.pop();
        }else{
            st.push(ch);
        }
    }
    return st.join('');
   
};