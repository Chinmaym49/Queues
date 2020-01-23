#include<iostream>
using namespace std;

class Queue {
    int queue[100],f,r;
public:
    Queue() {
        f=-1;
        r=-1;
    }

    void enqueue(int x) {
        if(r==-1) {
            f=0;
            r=0;
        }
        else
            r++;
        queue[r]=x;
    }

    int dequeue() {
        int x=queue[f];
        if(f==r) {
            f=-1;
            r=-1;
        }
        else
            f++;
        return x;
    }

};

int main() {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    return 0;
}