#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int val;
	Node *next;
	Node(int v) : val(v), next(NULL) {};
};

Node *buildList(const vector<int> &v)
{
	Node *head = NULL;
	Node *tail = NULL;

	for (int x : v)
	{
		Node *temp = new Node(x);

		if (!head)
		{
			head = tail = temp;
		}
		else
		{
			tail->next = temp;
			tail = temp;
		}
	}

	return head;
}

void printList(Node *head)
{
	Node *current = head;

	while (current)
	{
		cout << current->val << endl;

		current = current->next;
	}
}

Node *reversedList(Node *head)
{
	// TODO
	Node *curr = head, *prev = nullptr, *next;

	while (curr)
	{
		next = curr->next;

		curr->next = prev;

		prev = curr;
		curr = next;
	}

	return prev;
}

Node *filteredList(Node *head, int x)
{
	// TODO
	return head;
}

Node *mergedList(Node *a, Node *b)
{
	Node *head;
	return head;
}

int main()
{
	Node *dummy = buildList({1, 2, 3, 4});
	Node *reversedDummy = reversedList(dummy);
	printList(reversedDummy);

	return 0;
}