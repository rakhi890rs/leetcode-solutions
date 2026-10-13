class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>altitudes(gain.size()+1);
        altitudes[0]=0;
        for(int i=1;i<=gain.size();i++){
            altitudes[i]=altitudes[i-1]+gain[i-1];
        }
        int maxi=INT_MIN;
        for(int i=0;i<altitudes.size();i++){
            if(altitudes[i]>maxi){
                maxi=altitudes[i];
            }
        }
        return maxi;
    }
};