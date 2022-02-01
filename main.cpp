#include <iostream> // :|

#include "queue.h"

void you()
{
    std::cout << "Your test case : \n";
    queue q;
    q.enqueue(10); // [10]
    q.enqueue(20); // [10, 20]
    try
    {
        q.dequeue(); // [20]
        q.dequeue(); // []
    }
    catch (const std::invalid_argument &e)
    {
        std::cerr << e.what() << '\n';
    }
    q.enqueue(30); // [30]
    q.enqueue(40); // [30, 40]
    q.enqueue(50); // [30, 40, 50]
    try
    {
        q.dequeue();                   // [40, 50]
        std::cout << q.getF() << "\n"; // [(40), 50]
        std::cout << q.getR() << "\n"; // [40, (50)]
    }
    catch (const std::invalid_argument &e)
    {
        std::cerr << e.what() << '\n';
    }
}

void my()
{
    std::cout << "My test case : \n";
    queue q;
    try
    {
        q.dequeue(); // [] !!
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    q.enqueue(1); // [1]
    q.enqueue(2); // [1, 2]
    q.enqueue(3); // [1, 2, 3]
    try
    {
        q.dequeue();                   // [2, 3]
        std::cout << q.getF() << "\n"; // [(2), 3]
        std::cout << q.getR() << "\n"; // [2, (3)]
        q.dequeue();                   // [3]
        std::cout << q.getF() << "\n"; // [(3)]
        std::cout << q.getR() << "\n"; // [(3)]
        q.dequeue();                   // []
        q.dequeue();                   // [] !!
        // Continued commands are not executed due to the above command.
        std::cout << q.getF() << "\n"; // [] !!
        std::cout << q.getR() << "\n"; // [] !!
    }
    catch (const std::invalid_argument &e)
    {
        std::cerr << e.what() << '\n';
    }
}

void other()
{
    std::cout << "Other test case : \n";
    queue q;
    for (int i = 0; i < 5; i++)
        q.enqueue(i); // [0, 1, 2, 3, 4]
    try
    {
        std::cout << q.getF() << "\n"; // [(0), 1, 2, 3, 4]
        std::cout << q.getR() << "\n"; // [0, 1, 2, 3, (4)]
        q.dequeue();                   // [1, 2, 3, 4]
        std::cout << q.getF() << "\n"; // [(1), 2, 3, 4]
        std::cout << q.getR() << "\n"; // [1, 2, 3, (4)]
    }
    catch (const std::invalid_argument &e)
    {
        std::cerr << e.what() << '\n';
    }
}

int main()
{
    return 0;
}