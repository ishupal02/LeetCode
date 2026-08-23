class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int h = height.size()-1;
        int cmax = 0;
        int area = 0;
        for(int i = 0; i < height.size();i++){
            if(height[l]<height[h]){
                area = height[l]*(h-l);
                cmax = max(cmax, area);
                l++;
            }
            else{
                area = height[h]*(h-l);
                cmax = max(cmax, area);
                h--;
            }
        }
        return cmax;
    }
};