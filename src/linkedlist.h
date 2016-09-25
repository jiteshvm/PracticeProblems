#pragma once
#include <stdio.h>

struct ListNode
{
	int data;
	ListNode* next;
};

class LinkedList
{

private:
	ListNode* head;
	int length;

public:
	LinkedList();
	void AddFirst(int val);
	void AddLast(int val);
	void Add(int index, int val);
	ListNode* Find(int key);
	void Remove(ListNode* node);
	void PrintList();
	void ReverseList();
};
