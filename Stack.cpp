#include <iostream>
#include <vector>


using namespace std;

template<typename T>
class Stack{
    vector<T> stack = {};

    public:
        Stack(vector<T> inputStack) : stack(inputStack) {}

        // Push new value onto stack.
        void push(T value){
            stack.push_back(value);
        }

        // Pop/remove  first element in stack.
        void pop(){
            if (!stack.empty()){
                cout << stack[0] << "Popped.";
                stack.erase(stack.begin());
            }else{
                cout << "Can't pop off an empty stack!";
            }
        }

        // Outputs a peek at the top element of the stack.
        void peek(){
            cout << stack[0] << "is ontop of the stack!";
        }

        void isEmpty(){
            if (stack.empty()){
                cout << "Stack is empty!";
            }
            else{
                cout << "Stack is NOT empty";
            }
        }
}; 

int main(void){
    vector<int> stack1 = {1,2,3,4,5,6};
    Stack<int> stack(stack1);

    stack.push(9);
    stack.peek();
    stack.pop();
    stack.pop();

    return 0;
}