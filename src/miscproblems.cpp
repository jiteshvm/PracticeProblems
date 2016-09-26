#include "miscproblems.h"
#include <unordered_map>

vector<int> TwoSum(vector<int>& nums, int target) {

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

void reverse(char* s, int begin, int end) {
	while (begin < end) {
		char t = s[begin];
		s[begin] = s[end];
		s[end] = t;
		begin++, end--;
	}
}

void ReverseWords(char *s) {
	reverse(s, 0, strlen(s) - 1);
}