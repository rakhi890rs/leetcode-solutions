class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
           int x1=rec1[0];
           int x2=rec1[2];
           int y1=rec1[1];
           int y2=rec1[3];
           int w1=rec2[0];
           int w2=rec2[2];
           int z1=rec2[1];
           int z2=rec2[3];
            if((x2>w1 && w2>x1) && (y2>z1 && z2>y1)) return true;
            return false;        
    }
};