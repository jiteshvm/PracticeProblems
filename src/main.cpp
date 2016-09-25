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
	
	//reversewords
	//char *str = "one two three\0";
	//reverseWords(str);
	LinkedList* list = new LinkedList();
	//list->AddFirst(5);
	//list->AddFirst(4);
	//list->AddFirst(3);
	list->AddFirst(2);
	list->AddFirst(1);
	list->PrintList();
	//ListNode* c = list->Find(2);
	//list->Remove(c);
	list->ReverseList();
	list->PrintList();
	getchar();
	return 0;
}