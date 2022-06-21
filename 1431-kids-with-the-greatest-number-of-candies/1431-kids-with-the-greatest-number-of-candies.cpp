class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> kidsGreatestCandies;
        int flag=1;
        for(int i=0;i<candies.size();i++){
            int sum=0;
            sum=candies[i]+extraCandies;
            for(int j=0;j<candies.size();j++){
                if(sum>=candies[j]){
                    flag=1;
                }
                else{
                    flag=0;
                    break;
                }
            }
            if(flag==0){
                kidsGreatestCandies.push_back(false);
            }
            else if(flag==1){
                kidsGreatestCandies.push_back(true);
            }
            
        }
        
        return kidsGreatestCandies;
    }
};