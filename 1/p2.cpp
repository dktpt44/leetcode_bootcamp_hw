#include <iostream> 
#include <vector>


using namespace std;


class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp = 0, rp = height.size() - 1;
        int ar = 0;
        while(rp > lp) {
            int h = min(height[lp], height[rp]);
            int wd = rp - lp;
            ar = max(ar, h * wd);
            if(height[lp] < height[rp]) 
                lp++;
            else 
                rp--;
        }
        return ar;

        
    }
};





int main() {
    return 0;
}