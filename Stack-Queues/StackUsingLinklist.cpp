// #include <iostream>
// using namespace std;

// template <typename T>
// class Node {
// 	public : 
// 		T data;
// 		Node<T> *next;

// 		Node(T data) {
// 			this -> data = data;
// 			next = NULL;
// 		}

// 		~Node() {
// 			delete next;
// 		}
// };

// template <typename T>
// class Stack {
// 	Node<T> *head;
// 	int size;		// number of elements prsent in stack

// 	public :

// 	Stack() {

// 	}

// 	int getSize() {
		
// 	}

// 	bool isEmpty() {

// 	}

// 	void push(T element) {

// 	}

// 	T pop() {

// 	}

// 	T top() {

// 	}
// };

#include <iostream>
using namespace std;

template <typename T>
class Node {
    public:
        T data;
        Node<T>* next;

        Node(T data) {
            this->data = data;
            next = NULL;
        }

        ~Node() {
            delete next;
        }
};

template <typename T>
class Stack {
    Node<T>* head;
    int size;

    public:
        Stack() {
            head = NULL;
            size = 0;
        }

        int getSize() {
            return size;
        }

        bool isEmpty() {
            return size == 0;
        }

        void push(T element) {
            Node<T>* newNode = new Node<T>(element);
            newNode->next = head;
            head = newNode;
            size++;
        }

        T pop() {
            if (isEmpty()) {
                cout << "Stack is empty\n";
                return T();
            }
            Node<T>* temp = head;
            T data = temp->data;
            head = head->next;
            temp->next = NULL;
            delete temp;
            size--;
            return data;
        }

        T top() {
            if (isEmpty()) {
                cout << "Stack is empty\n";
                return T();
            }
            return head->data;
        }

        ~Stack() {
            delete head;
        }
};
