#include <iostream>
#include <vector>
#include <algorithm>
#include "edge.h"

using std::vector;
using std::find;
using std::cout;
using std::endl;

class Node
{
public:
	vector<Edge *> edges;
	char data;

	Node(char data);
	void insert_edge(int distance, Node* destination);
	void print_edges();
	Edge* has_edge(char data);
};

Node::Node(char data)
{
	this->data = data;
}

void Node::insert_edge(int distance, Node* destination)
{
	Edge* e = new Edge(distance, destination);
	edges.push_back(e);
}

Edge* Node::has_edge(char data)
{
	for (size_t i = 0; i < edges.size(); i++)
	{
		if (edges[i]->destination->data == data)
			return edges[i];
	}
	return nullptr;
}

void Node::print_edges()
{
	cout << "Node[" << data << "]: ";

	for (size_t i = 0; i < edges.size(); i++)
		cout << edges[i]->destination->data;

	cout << endl;
}

