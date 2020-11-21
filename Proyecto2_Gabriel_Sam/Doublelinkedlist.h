#pragma once
#include "Node.h";

template <typename T>
class Doublelinkedlist
{
public:
	Node<T>* start;
	Node<T>* end;
	int count;

	Doublelinkedlist() {
		start = nullptr;
		end = nullptr;
		count = 0;
	};

	~Doublelinkedlist() {};

	bool IsEmpty() {
		return count == 0;
	}

	void InsertAtStart(T new_value) {
		Node<T>* new_node = new Node<T>();
		new_node->value = new_value;

		if (IsEmpty()) { //The list is empty
			start = new_node;
			end = new_node;
		}
		else { //The list is not empty
			new_node->next = start;
			start = new_node;
		}
		count++;
		return;
	}

	void InsertAtEnd(T new_value) {
		Node<T>* new_node = new Node<T>();
		new_node->value = new_value;

		if (IsEmpty()) {
			start = new_node;
			end = new_node;
		}
		else {
			end->next = new_node;
			new_node->prev = end;
			end = new_node;
		}

		count++;
		return;
	}

	void InsertAtPosition(T new_value, int position) {
		Node<T>* new_node = new Node<T>();
		new_node->value = new_value;

		if (IsEmpty() || (position == 0)) { //The list is empty
			InsertAtStart(new_value);
		}
		else { //The list is not empty
			if (position >= count) {
				InsertAtEnd(new_value);
			}
			else { //Position in the middle
				Node<T>* pretemp = start;
				Node<T>* temp = start->next;
				int index = 1;
				while ((temp) && (index < position)) {
					pretemp = temp;
					temp = temp->next;
					index++;
				}
				new_node->next = temp;
				pretemp->next = new_node;
			}
		}
		count++;
	}
};

