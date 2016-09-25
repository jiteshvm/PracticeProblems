#include "linkedlist.h"

LinkedList::LinkedList()
{
	head = nullptr;
	length = 0;
}

void LinkedList::AddFirst(int val)
{
	ListNode* newnode = new ListNode();
	newnode->data = val;
	newnode->next = head;
	head = newnode;
}

void LinkedList::AddLast(int val) {
}

void LinkedList::Add(int index, int val) {
}

ListNode* LinkedList::Find(int key) {
	ListNode* list_it = head;
	while (list_it != nullptr) {
		if (list_it->data == key)
			return list_it;
		list_it = list_it->next;
	}
	return nullptr;
}

void LinkedList::Remove(ListNode * node) {
	if (node->next == nullptr)
		return;
	node->data = node->next->data;
	node->next = node->next->next;
}

void LinkedList::PrintList() {
	if (head == nullptr)
		return;

	ListNode* list_it = head;
	printf("\n");
	while (list_it != nullptr) {
		printf("%d", list_it->data);
		list_it = list_it->next;
		if (list_it != nullptr)
			printf(" -> ");
	}
}

void LinkedList::ReverseList()
{
	if (head == nullptr)
		return;

	ListNode* list_it = head;
	ListNode* prev = nullptr;

	while (list_it != nullptr) {
		ListNode* temp = list_it->next;
		list_it->next = prev;
		prev = list_it;
		list_it = temp;
	}
	head = prev;
}
