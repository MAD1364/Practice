#include <iostream>
#include "Queue.h"

int main()
{
    Queue q;

    for (int i = 0; i < 10; ++i)
    {
        std::cout << "Pushing " << (i+1) << " into stack based queue.\n";
        q.push(i+1);
    }

    for (int i = 0; i < 10; ++i)
        std::cout << q.pop() << std::endl;

    for (int i = 0; i < 10; ++i) q.push(i+1);

    std::cout << "\nFront of Queue: " << q.peek() << std::endl;

    return 0;
}
