#include <stdio.h>
#include <iostream>

#include <vector>
#include <unordered_map>

using namespace std;

class Solution {

public:

	vector<int> twoSum(vector<int>& nums, int target) {
		
		vector<int> result(2);
		unordered_multimap<int, int> mp;
		unordered_multimap<int, int>::iterator it2;
		pair <unordered_multimap<int, int>::iterator, unordered_multimap<int, int>::iterator> ret;
		for (unsigned int i = 0; i < nums.size(); ++i) {
			int rem = target - nums[i];
			ret = mp.equal_range(rem);
			for (it2 = ret.first; it2 != ret.second; ++it2) {
				if (it2->second != i) {
					result[0] = it2->second;
					result[1] = i;
					return result;
				}
			}
			mp.insert(std::pair<int, int>(nums[i], i));
		}
		return result;
	}
};

int main(int argc, const char* argv[]) {
	vector<int> v = { 0, 4, 3, 0};
	int t = 0;
	Solution* s = new Solution();
	vector<int> res = s->twoSum(v,t);
	for (unsigned i = 0; i < res.size(); ++i) {
		printf("%d, ", res[i]);
	}
	getchar();
	return 0;
}