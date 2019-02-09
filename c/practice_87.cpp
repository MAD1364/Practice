#include <iostream>
#include <stack>

void reverseStack(std::stack<int>&);
void reverseStackAux(std::stack<int>&, int);
void displayStackElements(std::stack<int>&);

int main()
{
    std::stack<int> numbers;

    numbers.push(1);
    numbers.push(2);
    numbers.push(3);
    numbers.push(4);
    numbers.push(5);

    displayStackElements(numbers);
    std::cout << std::endl;
    // demonstrate all numbers initially pushed onto stack remain on stack
    displayStackElements(numbers);
    std::cout << std::endl;

    reverseStack(numbers);

    std::cout << "Reverse Stack: " << std::endl;
    displayStackElements(numbers); // display reversed stack

    return 0;
}

void reverseStack(std::stack<int>& numbers)
{
    if (numbers.empty()) return;

    int number = numbers.top(); // get top of stack
    numbers.pop(); // remove top of stack

    reverseStack(numbers); // continue processing stack

    reverseStackAux(numbers, number); // put this element at bottom of stack
}

void reverseStackAux(std::stack<int>& numbers, int number)
{
    if (numbers.empty()) {numbers.push(number); return;} // put this element at bottom of stack

    int top = numbers.top(); // remove top of stack to push number to the bottom
    numbers.pop(); // remove top of stack to push number to the bottom of the stack

    reverseStackAux(numbers, number);

    numbers.push(top); // replace top element when number has been pushed to the bottom of the stack
}

void displayStackElements(std::stack<int>& numbers)
{
    if (numbers.empty()) return;

    int number = numbers.top(); // top of stack
    numbers.pop(); // remove top of stack

    std::cout << number << std::endl;

    displayStackElements(numbers);

    numbers.push(number);
}