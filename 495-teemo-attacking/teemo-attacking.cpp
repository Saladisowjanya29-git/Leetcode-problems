class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int d=duration;
        for(int i=1;i<timeSeries.size();i++)
        {
            int g=timeSeries[i]-timeSeries[i-1];
            if(g < duration)
            {
                d +=g;
            }
            else
            {
                d +=duration;
            }
        }
        return d;
    }
};