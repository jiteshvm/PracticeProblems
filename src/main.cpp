#include <stdio.h>
#include <iostream>
#include "miscproblems.h"
#include "linkedlist.h"

int main(int argc, const char* argv[]) {

	// two sum
	//vector<int> v = { 1, 1, 3, 5};
	//int t = 2;
	//vector<int> res = twosum(v,t);
	//for (unsigned i = 0; i < res.size(); ++i) {
	//	printf("%d, ", res[i]);
	//}

	//reverse words in a string
	char str[] = "one two three\0";
	printf("%s", str);
	ReverseWords(str);
	printf("\n%s", str);
	//reverseWords(str);

	//linked list operations
	//LinkedList* list = new LinkedList();
	//list->AddFirst(5);
	//list->AddFirst(4);
	//list->AddFirst(3);
	//list->AddFirst(2);
	//list->AddFirst(1);
	//list->PrintList();
	//ListNode* c = list->Find(2);
	//list->Remove(c);
	//list->ReverseList();
	//list->PrintList();

	// trapping rain water
	//vector<int> rain = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
	//vector<int> rain = { 0, 0, 0, 10, 10, 0, 0, 0, 0, 2, 1, 0 };
	//vector<int> rain = { 2, 0, 2 };
	//int amt = trap(rain);
	//printf("\rain water trapped = %d", amt);

	//hamming weight
	int w = hammingWeight(3);
	printf("number of bits = %d", w);
	getchar();
	return 0;
}