// code is writen in Visual studio 2019
// it executes LINKED LIST

#include <iostream>

using namespace std;

struct Node
{
	int v;
	struct Node* next;
};

Node* head = NULL;
void InsertNode(Node* n);
Node* createNode(int v);
void printlist();
int deleteNode();

void InsertNode(Node* n)
{
	if (head == NULL)
	{
		head = n;
		return;
	}
	Node* temp = head;
	while (temp->next !=NULL)
	{
		temp = temp->next;
	}
	temp->next = n;
}


Node* createNode(int v)
{
	Node* temp = (Node*)malloc(sizeof(Node));
	temp->v = v;
	temp->next = NULL;
	return temp;
}

void printlist()
{
	if (head == NULL)
	{
		cout << "EMPTY LIST ... \n";
	}
	Node* temp = head;
	cout << "PRINTING LIST \n";
	while (temp != NULL)
	{
		cout << temp->v << endl;
		temp = temp->next;
	}

}


int deleteNode(int v)
{
	if (head == NULL)
	{
		return -2;
	}
	Node* leader = head;
	Node* follower = head;
	while (leader != NULL && leader->v != v)
	{
		follower = leader;
		leader = leader->next;
	}
	if (leader == NULL)
	{
		return -1;
	}
	if (leader == head)
	{
		head = head->next;
	}
	follower->next = leader->next;
	int temp = leader->v;
	free(leader);
	return temp;
}

int main()
{
int v;
    cout << "Enter value[-1 to EXIT] :- ";
    cin >> v;
    while (v != -1)
    {
        InsertNode(createNode(v));
        cout << "Enter next value[-1 to exit] :- ";
        cin >> v;
    }
	cout << "BEFORE DELETING ... \n";
	printlist();

	int x;
	cout << "ENTER THE VALUE YOU WANT TO DELETE[-2 to exit] \n";
	cin >> x;
	while (x != -2)
	{
		deleteNode(x);
		cout << "ENTER NEXT VALUE[-2 to exit] \n";
		cin >> x;
	}
	cout << "AFTER DELETING ... \n";
    printlist();
	return 0;
}
