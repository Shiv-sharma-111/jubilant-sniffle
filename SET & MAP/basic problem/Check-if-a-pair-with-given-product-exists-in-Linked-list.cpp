#include <bits/stdc++.h> 
#define MAX 100000
using namespace std;
struct Node {
    int data;
    struct Node* next;
};

void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

bool check_pair_product(struct Node* head, int prod)
{
    unordered_set<int> s;

    struct Node* p = head;

    while (p != NULL) {

        int curr = p->data;

        // Check if pair exits
        if ((prod % curr == 0) && (s.find(prod / curr) != s.end())) {
            cout << curr << " " << prod / curr;
            return true;
        }

        s.insert(p->data);
        p = p->next;
    }

    return false;
}

int main()
{
    struct Node* head = NULL;
    push(&head, 1);
    push(&head, 2);
    push(&head, 1);
    push(&head, 12);
    push(&head, 1);
    push(&head, 18);
    push(&head, 47);
    push(&head, 16);
    push(&head, 12);
    push(&head, 14);

    bool res = check_pair_product(head, 24);
    if (res == false)
        cout << "NO PAIR EXIST";

    return 0;
}
