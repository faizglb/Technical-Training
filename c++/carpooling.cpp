class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int>tracks(1001,0);
        for(auto& trip: trips){
            int num=trip[0];
            int start=trip[1];
            int end=trip[2];
            tracks[start]+=num;
            tracks[end]-=num;
            

        }
        int curr_capacity=0;
        for(int r: tracks){
            curr_capacity+=r;
            if(curr_capacity > capacity){
                return false;
            }
        

        }
        return true;

    }


};