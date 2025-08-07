struct Node* insertAtBeginning(struct Node* head, int x) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = head;
    return newNode;
}

struct Node* insertAtEnd(struct Node* head, int x) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = NULL;
    
    if (head == NULL)
        return newNode;

    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

struct Node* insertInMiddle(struct Node* head, int x) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = x;
    
    if (head == NULL) {
        newNode->next = NULL;
        return newNode;
    }

    int count = 0;
    struct Node* temp = head;
    while (temp) {
        count++;
        temp = temp->next;
    }
    
    int mid = count / 2;
    temp = head;
    for (int i = 1; i < mid; i++)
        temp = temp->next;

    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}


void deleteNode(struct Node **head_ref, int pos) {
    if (*head_ref == NULL)
        return;

    struct Node* temp = *head_ref;

    if (pos == 1) {
        *head_ref = temp->next;
        free(temp);
        return;
    }

    for (int i = 1; temp != NULL && i < pos - 1; i++)
        temp = temp->next;

    if (temp == NULL || temp->next == NULL)
        return;

    struct Node* next = temp->next->next;
    free(temp->next);
    temp->next = next;
}


int getNthFromLast(struct Node *head, int n) {
    struct Node* first = head;
    struct Node* second = head;

    for (int i = 0; i < n; i++) {
        if (first == NULL) return -1;
        first = first->next;
    }

    while (first != NULL) {
        first = first->next;
        second = second->next;
    }

    return second->data;
}


struct Node* reverseList(struct Node* head) {
    struct Node *prev = NULL, *current = head, *next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

void printLinkedList(SinglyLinkedListNode* head) {
    while (head != NULL) {
        printf("%d\n", head->data);
        head = head->next;
    }
}
