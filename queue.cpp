#include <iostream>

#include "queue.h"

void queue::enqueue(int d)
{
    if (s1.empty())
    {
        s1.push(d);
        front = rear = d;
    }
    else
    {
        s1.push(d);
        rear = d;
    }
}

void queue::dequeue() // remove in queue (front)
{
    if (s1.empty())
        throw std::invalid_argument("Queue is empty!");
    while (!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }
    s2.pop();
    if (!s2.empty())
        front = s2.top();
    while (!s2.empty())
    {
        s1.push(s2.top());
        s2.pop();
    }
}

int queue::getF() // get front
{
    if (s1.empty())
        throw std::invalid_argument("Queue is empty!");
    return front;
}