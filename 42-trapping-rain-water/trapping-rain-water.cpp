class Solution {
public:
    int trap(vector<int>& height) {
        int start =0;
        int end= height.size()-1;

        int r_max=0;
        int l_max=0;
        int total=0;

        while (start<end) {
            l_max=max(l_max,height[start]);
            r_max=max(r_max,height[end]);
            if(r_max>l_max) {
                total+=l_max-height[start];
                start++;
            }
            else {
                total+=r_max-height[end];
                end--;
            }
        }
        return total;
    }
};