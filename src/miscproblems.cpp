#include "miscproblems.h"
#include <unordered_map>
#include <bitset>
#include <iostream>

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
		bitset<16> b(n);
		//cout << b << endl;
		n = n >> 1;
	}
	return num_bits;
}

// naive method to find parity
short parity_naive(unsigned long n)
{
	short res = 0;
	while (n) {
		res = !res;
		bitset<1> b(res);
		//cout << "res = " << b << endl;
		n = n & (n - 1);
	}
	return res;
}

// find parity using lookup
short parity_lookup(unsigned long n)
{
	//n ^= n >> 32;
	bitset<16> t;
	t = bitset<16>(n);
	cout << endl << "n =          " << t;
	n ^= n >> 16;
	t = bitset<16>(n);
	cout << endl << "n ^= n >> 16 " << t;
	n ^= n >> 8;
	t = bitset<16>(n);
	cout << endl << "n ^= n >> 8  " << t;
	n ^= n >> 4;
	t = bitset<16>(n);
	cout << endl << "n ^= n >> 4  " << t;
	n ^= n >> 2;
	t = bitset<16>(n);
	cout << endl << "n ^= n >> 2  " << t;
	n ^= n >> 1;
	t = bitset<16>(n);
	cout << endl << "n ^= n >> 1  " << t;
	t = bitset<16>(n & 0x1);
	cout << endl << "n & 0x1      " << t;
	return n & 0x1;
}

uint32_t reverseBits(uint32_t n)
{
	bitset<32> t;
	t = bitset<32>(n);
	cout << endl << "before reverse : " << t;

	uint32_t r;
	r = (BitReverseTable256[n & 0xff] << 24) |
		(BitReverseTable256[(n >> 8) & 0xff] << 16) |
		(BitReverseTable256[(n >> 16) & 0xff] << 8) |
		(BitReverseTable256[(n >> 24) & 0xff]);

	t = bitset<32>(r);
	cout << endl << "after reverse  : " << t;
	return r;
}
