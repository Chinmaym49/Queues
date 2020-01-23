#include<iostream>
using namespace std;

class Deque {
    int deque[100],f,r;
public:
    Deque() {
        f=-1;
        r=-1;
    }

    void enqueueF(int x) {
        if(f==-1) {
            f=0;
            r=0;
        }
        else {
            if(f==0) {
                for(int i=r;i>=f;i--)
                    deque[i+1]=deque[i];
            }
        }
        deque[f]=x;
    }

    void enqueueR(int x) {
        if(r==-1) {
            f=0;
            r=0;
        }
        else 
            r++;
        deque[r]=x;
    }

    int dequeueF() {
        int x=deque[f];
        if(f==r) {
            f=-1;
            r=-1;
        }
        else
            f++;
        return x;
    }

    int dequeueR() {
        int x=deque[r];
        if(f==r) {
            f=-1;
            r=-1;
        }
        else
            r--;
        return x;
    }

};

int main() {
    Deque d;
    d.enqueueF(1);
    d.enqueueF(2);
    d.enqueueR(3);
    d.enqueueR(4);
    cout<<d.dequeueF()<<endl;
    cout<<d.dequeueR()<<endl;
    return 0;
}