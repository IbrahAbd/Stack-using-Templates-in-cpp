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
                cout << stack[0] << " Popped." << endl;
                stack.erase(stack.begin());
            }else{
                cout << "Can't pop off an empty stack!" << endl;
            }
        }

        // Outputs a peek at the top element of the stack.
        void peek(){
            if (stack.empty()){
                cout << "Stack is empty!" << endl;
                return;
            }
            cout << "Top of the stack: " << stack[0] << endl;
        }

        void isEmpty(){
            if (stack.empty()){
                cout << "Stack is empty!" << endl;
            }
            else{
                cout << "Stack is NOT empty" << endl;
            }
        }
}; 

int main(void){
    vector<int> stack1 = {};
    Stack<int> stack(stack1);
    bool flag = true;

    while (flag){
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Is Empty" << endl;
        cout << "5. Exit" << endl;
        int choice;
        cin >> choice;
        switch (choice){
        case 1:
            int value;
            cout << "Enter value to push: ";
            cin >> value;
            stack.push(value);
            break;
        case 2:
            stack.pop();
            break;
        case 3:
            stack.peek();
            break;
        case 4:
            stack.isEmpty();
            break;
        case 5: 
            flag = false;
            break;
            
        default:
            break;
        }
    }

    return 0;
}