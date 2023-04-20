class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int life = 0;
		int player = NULL;

		for (auto i: nums) {
			if (life == 0) player = i;
			if (player == i) ++life;
			else --life;
		}
		return player;
    }
};