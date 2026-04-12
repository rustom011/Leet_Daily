class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea = 0;
        int left = 0;
        int right = height.size()-1;

        while (left < right ){
            int width = right - left ;
            int minheight = min (height[left] , height[right]);

            int carea= width * minheight;
            maxarea = max(maxarea , carea);

             if (height[left]<height[right]){
                left ++;
            }
            else {
                right--;
         
            }

        }
        return maxarea;
      
    } 
};