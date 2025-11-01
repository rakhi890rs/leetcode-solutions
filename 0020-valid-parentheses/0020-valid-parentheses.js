/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function(s) {
    let st=[]
    let bool=true;
    for(let i=0;i<s.length;i++){
        let ch=s.charAt(i);
        if(ch=='('|| ch=='{'|| ch=='['){
            st.push(ch)
            continue;
        }
        if(st.length==0)return false
        if(ch==')'){
            if(st[st.length-1]=='(')st.pop()
            else {
                bool=false;
            }
        }
        if(ch=='}'){
            if(st[st.length-1]=='{')st.pop()
            else {
                bool=false;
            }
        }
        if(ch==']'){
            if(st[st.length-1]=='[')st.pop()
            else {
                bool=false;
            }
    }}
    if(st.length!=0)return false;
    return bool;
};