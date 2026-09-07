class Solution {
public:
    // int sum(vector<int>& arr){
    //     int s=0;
    //     for (int i=0;i<arr.size();i++){
    //         s+=arr[i];
    //     }
    //     return s;
    // }
    bool sanity(vector<int>& piles, int h,int s){
        long long c=0;
        for(int i=0;i<piles.size();i++){
            int curr=(piles[i]+s-1)/s;
            c+=curr;
        }
        if(c<=h)return true;
        else return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low =1;
        int high=*max_element(piles.begin(),piles.end());
        int ans =high;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(sanity(piles,h,mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        } 
        
        return ans;
    }
};