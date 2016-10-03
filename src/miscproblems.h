#pragma once
#include <vector>

static const unsigned char BitReverseTable256[256] =
{
#   define R2(n)     n,     n + 2*64,     n + 1*64,     n + 3*64
#   define R4(n) R2(n), R2(n + 2*16), R2(n + 1*16), R2(n + 3*16)
#   define R6(n) R4(n), R4(n + 2*4 ), R4(n + 1*4 ), R4(n + 3*4 )
	R6(0), R6(2), R6(1), R6(3)
};

using namespace std;

vector<int> TwoSum(vector<int>& nums, int target);

void reverse(char* s, int begin, int end);

void ReverseWords(char *s);

// trapping rain water
int trap(vector<int>& height);

int hammingWeight(uint32_t n);

short parity_naive(unsigned long n);
short parity_lookup(unsigned long n);

uint32_t reverseBits(uint32_t n);
