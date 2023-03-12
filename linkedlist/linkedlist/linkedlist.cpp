
#include <iostream>
using namespace std; 
class Node {
public:
	int data; 
	Node* next; 
};

class Linkedlist {
public:
	Node* head;

	Linkedlist() {
		head = NULL; 
	}

	bool isempty() {
		return (head == NULL);  
	}
	void insertfirst(int newitem) {
		int no_oflist; 
		cin >> no_oflist;
		Node* newnode = new Node();
		newnode->data = newitem;
		if (isempty()) {
			newnode->next = NULL; 
			head = newnode; 
		}
		else{

			newnode->next = head; 
			head = newnode;
		}
	}

	void display() {
		Node* temp = head; 
		
		while (temp!=NULL)
		{
			cout << temp->data << "  ";
			temp = temp->next;
		}
	}

	int count() {
		int counter = 0;
		Node* temp = head;
		while (temp != NULL)
		{
			temp = temp->next;
			counter++; 
		}
		return counter;
	}

	bool isfound(int key) {
		bool isfound = false; 
		Node* temp = head;
		while(temp!=NULL)
		{
			if (temp->data == key) {
				temp = temp->next; 
				isfound = true;
			}
				return isfound;
		}

	}
};

int main() {
	Linkedlist l1; 
	int items; 
	cout << "enter how many numbers you want\n"; 
	cin >> items; 
	
	for (int i = 0; i < items; i++) {
		cout << "enter the item number" << i << "\n";
		int value;
		cin >> value;
		l1.insertfirst(value); 
		l1.display(); 
	}
	system("pause>0"); 

}


