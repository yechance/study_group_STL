//1920 Build Array from Permutation
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> output;
        for(int i=0;i<nums.size();i++)
        {
            output.push_back(nums[nums[i]]);
        }
        return output;
    }
};

//1929 Concatenation of Array
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> output;
        for(int i=0;i<2*nums.size();i++)
        {
            output.push_back(nums[i%nums.size()]);
        }
        return output;
    }
};

//2011Final Value of Variable After Performing Operations
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int output=0;
            for(int i=0;i<operations.size();i++){
                if(operations[i]=="X++"||operations[i]=="++X")
                    output++;
                else
                    output--;
            }
        return output;
    }
};
