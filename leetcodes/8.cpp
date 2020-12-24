class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
    for (int i = 0 ; i < arr.size(); i++){
        int max = -1;
        for(int j = i+1; j < arr.size(); j++){
            if(arr[j] >= max){
                max = arr[j];
            }
        }
        arr[i] = max;   
    }
    return arr;
    }
};


int n=heights.size(),count=0;
vector<int> h(n,0);
h=heights;

sort(h.begin(),h.end());

for(int i=0;i<heights.size();i++)
{
if(heights[i]!=h[i])
    count++;
}
return count;
}

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count = 0;
        for(int i = 1 ; i < heights.size() ; i++){
            int key = heights[i];
            int j = i-1;
            while(j >= 0 && heights[j] > key){
                heights[j+1] = heights[j];
                j--;
            }
            if (heights[j+1] = key){
                count++;
            }
            heights[j+1] = key;
        }
    return count;
    }
};
