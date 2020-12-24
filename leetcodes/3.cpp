class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        for(int i = 0; i < arr.size(); i++){
            if (arr[i] == 0){
                int j = arr.size()-1;
                while(j > i){
                    arr[j] = arr[j-1];
                    j--;
                }
            i+=1;
            }
        }
    }
};
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> res;
        for(int i = 0; i < arr.size(); i++){
            res.push_back(arr[i]);
            if(arr[i] == 0) res.push_back(0);
        }
        res.resize(arr.size());
        arr = res;
    }
};