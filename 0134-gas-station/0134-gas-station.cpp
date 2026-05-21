class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        // Invalid case
        int totalGas =0;
        int totalCost =0;

        for(int i=0; i<gas.size(); i++){
            totalGas += gas[i];
            totalCost += cost[i];
        }
        if(totalGas < totalCost){
            return -1;
        }

        //valid case
        int currentGas =0;
        int startIndex =0;

        for(int i=0; i<gas.size(); i++){

            currentGas += gas[i] - cost[i];

            if(currentGas < 0){
                currentGas =0;
                startIndex = i+1;
            }
        }
        return startIndex;

    }
};