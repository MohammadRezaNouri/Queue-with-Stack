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