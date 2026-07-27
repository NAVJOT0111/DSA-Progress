class Solution {
public:
    int maxArea(vector<int>& height) {

        int res = 0;
        for(int i =0; i< height.size();i++){
            for(int j = i+1; j< height.size(); j++){
                int area = (j-i) * min(height[j], height[i]);
                res = max(res,area);
            }
        }
        return res;
    }
};
O(n2)

class Solution {
public:
    int maxArea(vector<int>& height) {

        int res = 0;
        int l =0; int r= height.size() - 1;
        
        while(l<r){
            int area = (r-l) * min(height[r], height[l]);
            res = max(res,area);

            if(height[l]<height[r]) l++;
            else r--;
        }
       
        return res;
    }
};

O(n)
