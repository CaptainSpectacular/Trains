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
	vector<Edge> edges;
	char data;

	Node(char data);
	void insert_edge(int distance, Node* destination);
	void print_edges();
};

Node::Node(char data)
{
	this->data = data;
}

void Node::insert_edge(int distance, Node* destination)
{
	Edge* e = nullptr;
	for (size_t i = 0; i < edges.size(); i++)
	{
		if (edges[i].destination->data == destination->data)
		{ 
			e = &edges[i];
			break;
		}
	}
	if (e == nullptr)
	{
		e = new Edge(distance, destination);
		edges.push_back(*e);
	}
}

void Node::print_edges()
{
	cout << "Node[" << data << "]: ";

	for (size_t i = 0; i < edges.size(); i++)
	{
		cout << edges[i].destination->data;
	}

	cout << endl;
}

