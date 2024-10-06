#include<iostream>
using namespace std;
#define max 5
int rear = -1, front = -1, cqueue[max];

class DSA {
	int data;
public:
	void enqueue() {
		if (front == (rear + 1) % max) {
			cout << "queue is full";
		}
		else {
			cin >> data;
			rear = (rear + 1) % max;
			if (front == -1) {
				front = 0;
			}
			cqueue[rear] = data;
		}

	}

	void dequeue() {
		if (front == -1) {
			cout << "queue is empty";
		}
		else {
			if (front == rear) {
				cout << "dequeued element is " << cqueue[front];
				front = -1; rear = -1;
			}
			else {
				cout << "dequeued element is " << cqueue[front];
				front=(front+1)%max;
			}
		}
	}

	void display() {
		if(front==-1){
			cout<<"queue is empty";
		}
	else{
			int i=front;
		while(i!=rear){
			cout<<cqueue[i];
			i=(i+1)%max;
		}
		cout<<cqueue[i];
	}
	cout<<endl;
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
