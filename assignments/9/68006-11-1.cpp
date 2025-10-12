#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node *NODEPTR;

NODEPTR getnode(void)
{
    NODEPTR p;
    p = (NODEPTR)malloc(sizeof(struct Node));
    return p;
}

void freenode(NODEPTR p)
{
    free(p);
}

void append(NODEPTR *head, int x)
{
    // Create a new node
    NODEPTR new_node = getnode();
    new_node->data = x;
    new_node->next = NULL;

    // If given list is empty, use the node as the first
    if (*head == NULL)
    {
        *head = new_node;
        return;
    }
    else
    {
        NODEPTR last = *head;
        // If not empty, append
        while (last->next != NULL)
        {
            // while not the last one, keep going
            last = last->next;
        }

        last->next = new_node;
    }
}

void printList(NODEPTR p)
{
    while (p->next != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << p->data;
    cout << endl;
}

int main()
{
    // Take in N1 and N2
    int n1, n2;
    NODEPTR L1 = NULL;
    NODEPTR L2 = NULL;

    cout << "Input N1: ";
    cin >> n1;
    cout << endl;

    cout << "Input N2: ";
    cin >> n2;
    cout << endl;

    cout << "L1 = ";

    for (int i = 0; i < n1; i++)
    {
        int n;
        cin >> n;
        if (i != n1 - 1)
        {
            cout << "->";
        }
        append(&L1, n);
    }
    cout << endl;

    cout << "L2 = ";
    for (int i = 0; i < n2; i++)
    {
        int n;
        cin >> n;
        if (i != n2 - 1)
        {
            cout << "->";
        }
        append(&L2, n);
    }
    cout << endl;

    int x;
    cout << "X = ";
    cin >> x;
    cout << endl;

    int commons = 0;
    for (int i = 0; i < n1; i++)
    {
        int currentI = L1->data;

        NODEPTR first = L2;
        for (int j = 0; j < n2; j++)
        {
            int currentJ = L2->data;

            if (currentI + currentJ == x)
                commons++;

            L2 = L2->next;
        }
        L2 = first;
        L1 = L1->next;
    }

    cout << "Output: " << commons << endl;
    return 0;
}
