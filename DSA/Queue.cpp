#include<iostream>
using namespace std;
#define max 5
int rear = -1, front = -1, queue[max];

class DSA {
	int data;
public:
	void enqueue() {
		if (rear == max-1) {
			cout << "queue is full";
		}
		else {
			cin >> data;
			rear++;
			if (front == -1) {
				front = 0;
			}
			queue[rear] = data;
		}

	}

	void dequeue() {
		if (front == -1) {
			cout << "queue is empty";
		}
		else {
			if (front==rear) {
				cout << "dequeued element is " << queue[front];
				front = -1; rear = -1;
			}
			else {
				cout << "dequeued element is " << queue[front];
				front++;
			}
		}
	}

	void display() {
	for(int i=front;i<=rear;i++){
		cout<<queue[i];
	}
	cout<<endl<<endl;
}
};

int main() {
	DSA d;
	int n;
	while (1) {
		cout << "1.enqueue\n2.dequeue\n3.display\n4.exit\nenter your choice: ";
		cin >> n;
		switch (n) {
			case 1: {
				d.enqueue();
				break;
			}
			case 2: {
				d.dequeue();
				break;
			}
			case 3: {
				d.display();
				break;
			}
			case 4: {
				exit(0);
				break;
			}
			default:
				cout << "invalid choice";

		}
		
	}
}
