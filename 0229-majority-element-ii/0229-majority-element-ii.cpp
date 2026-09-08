class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        int can1=0,can2=0;
        int c1=0,c2=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==can1)c1++;
            else if(arr[i]==can2) c2++;
            else if(c1==0){
                can1=arr[i];
                c1=1;
            }else if(c2==0){
                can2=arr[i];
                c2=1;
            }else{
                c1--;
                c2--;
            }
        }
        vector<int>ans;
        c1=0,c2=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==can1)c1++;
            else if(arr[i]==can2)c2++;
        }
        if(c1>arr.size()/3) ans.push_back(can1);
        if(c2>arr.size()/3) ans.push_back(can2);
        sort(ans.begin(),ans.end());
        return ans;
    }
};