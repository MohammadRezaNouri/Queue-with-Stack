#ifndef QUEUE_H
#define QUEUE_H
#include <stack>

class queue
{
private:
    std::stack<int> s1;
    std::stack<int> s2;
    int front, rear; // Data in start & last
public:
    void enqueue(int); // Insert in queue
    void dequeue();    // Remove in queue (front)
    int getF();        // Get front
    int getR();        // Get rear
};

#endif