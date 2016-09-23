#include "miscproblems.h"
#include <unordered_map>

vector<int> twosum(vector<int>& nums, int target) {

	vector<int> result(2);
	unordered_map<int, int> mp;
	unordered_map<int, int>::iterator ret;
	for (unsigned int i = 0; i < nums.size(); ++i) {
		int rem = target - nums[i];
		ret = mp.find(rem);
		if(ret != mp.end()) {
			result[0] = ret->second;
			result[1] = i;
			return result;
		}
		mp.insert(std::pair<int, int>(nums[i], i));
	}
	return result;
}

void reverseWords(char *s) {
}