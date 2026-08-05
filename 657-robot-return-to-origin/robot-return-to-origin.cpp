class Solution {
public:
    bool judgeCircle(string s) {
        int n=s.size();
        int cu=0,cd=0,cl=0,cr=0;
        for(int i=0;i<n;i++) {
            if(s[i]=='U')cu++;
            else if(s[i]=='D')cd++;
            else if (s[i]=='L')cl++;
            else cr++;
        }
        if(cl==cr && cd==cu)return true;
        else return false;
    }
};