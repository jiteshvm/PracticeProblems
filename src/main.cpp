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
	//char str[] = "one two three\0";
	//printf("%s", str);
	//ReverseWords(str);
	//printf("\n%s", str);
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
	//int n = 9999;
	//int w = hammingWeight(n);
	//printf("number of 1 bits in %d = %d", n, w);

	int n1 = 32767;
	int n2 = 32763;
	int p1 = parity_naive(n1);
	int p2 = parity_lookup(n2);
	printf("parity of %d = %d", n1, p1);
	printf("\nparity of %d = %d", n2, p2);
	getchar();
	return 0;
}