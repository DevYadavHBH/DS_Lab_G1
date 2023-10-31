# include <iostream>
using namespace std;
class Queue {
    
    int* arr;
    int qfront;
    int rear; 
    int size;
    
public:
    Queue() {
        size = 100001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }
    bool isEmpty() {
        if(qfront == rear) {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(int data) {
        if(rear == size)
            cout << "Queue is Full" << endl;
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        if(qfront == rear) {
            return -1;
        }
        else
        {	int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront==rear){
                qfront = 0;
                rear = 0;
            }
         return ans;
        }
    }

    int front() {
        if(qfront == rear) {
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }
};

int main(){
	Queue q;
	int n, x;
	cout<<"Enter the number of elements you want in Queue: ";
	cin>>n;
	for (int i=0;i<n;++i)
	{
		cout<<"Enter element to be inserted into queue :";
		cin>>x;
		q.enqueue(x);
		}
	while(!q.isEmpty())
	{
		cout<<"Dequeued element :"<<q.dequeue() << endl;
	}
	q.enqueue(5);
	if(q.isEmpty()){
		cout<<"The Queue is Empty." << endl;
	}
	else{
		cout<<"Front Element of Queue is "<<q.front() << endl;
	}
	return 0;
		
}
