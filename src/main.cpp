#include <stdio.h>
#include <iostream>
#include "miscproblems.h"
#include "linkedlist.h"

int main(int argc, const char* argv[]) {

	// two sum
	vector<int> v = { 1, 4, 3, 5};
	int t = 7;
	vector<int> res = twosum(v,t);
	for (unsigned i = 0; i < res.size(); ++i) {
		printf("%d, ", res[i]);
	}
	
	//reversewords
	//char *str = "one two three\0";
	//reverseWords(str);

	getchar();
	return 0;
}