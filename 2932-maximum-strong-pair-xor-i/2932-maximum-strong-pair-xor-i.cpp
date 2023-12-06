class Solution
{
    public:
        int maximumStrongPairXor(vector<int> &nums)
        {
            int answer = 0;
            for (int i: nums)
            {
                for (int j: nums)
                {
                    if (abs(i - j) <= min(i, j))
                    {
                        answer = max(answer, i ^ j);
                    }
                }
            }
            return answer;
        }
};