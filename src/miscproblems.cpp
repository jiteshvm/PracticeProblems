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

int trap(vector<int>& height) {
	int i = 0;
	int j = (int)height.size() - 1;
	int iMax = 0, jMax = 0, amount = 0;
	while(i <= j) {
		if (height[i] <= height[j]) {
			if (height[i] >= iMax)
				iMax = height[i];
			else
				amount += iMax - height[i];
			++i;
		}
		else {
			if (height[j] >= jMax)
				jMax = height[j];
			else
				amount += jMax - height[j];
			--j;
		}
	}
	return amount;
}

// count the number of bits that are set to 1
int hammingWeight(uint32_t n) {
	int num_bits = 0;
	//char buffer[256];
	while (n) {
		num_bits += n & 1;
		//_itoa_s(n, buffer, 2);
		//printf("n: %s\n", buffer);
		n = n >> 1;
	}
	return num_bits;
}

short parity_naive(unsigned long n)
{
	short res = 0;
	//char buffer[256];
	while (n) {
		res = !res;
		//_itoa_s(res, buffer, 2);
		//printf("res: %s\n", buffer);
		n = n & (n - 1);
	}
	return res;
}

short parity_lookup(unsigned long n)
{
	//n ^= n >> 32;
	n ^= n >> 16;
	n ^= n >> 8;
	n ^= n >> 4;
	n ^= n >> 2;
	n ^= n >> 1;
	return n & 0x1;
}
