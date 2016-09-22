#pragma once

struct ListNode
{
	int data;
	ListNode *next;
};

void insert_after(ListNode *node, ListNode* newnode);

ListNode* search_list(ListNode *head, int key);

void erase_after(ListNode *node);
