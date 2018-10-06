#include <iostream>
#include <vector>
#include <algorithm>
#include "edge.h"

using std::vector;
using std::find;
using std::cout;
using std::endl;


// this should be in node.h which this file should include. also note that currently things like the type of edges
// vary betweeen node.h and this file.
class Node
{
public:
	vector<Edge> edges;
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
	// Something here must be bad design. As edges get added,
	// it seems old edges get corrupted as seen when they are
	// printed out.
	
	// I would do edges.push_back(e) and make edges a vector<Edge *>. This should solve your issue.
	// The expression '*e' is a temporary created on the stack. So when this method returns, the memory
	// is re-used (so as you noticed, other things often overwrite it).
	Edge* e = new Edge(distance, destination);
	edges.push_back(*e);
}

Edge* Node::has_edge(char data)
{
	for (size_t i = 0; i < edges.size(); i++)
	{
		if (edges[i].destination->data == data)
			return &edges[i];
	}
	return nullptr;
}

void Node::print_edges()
{
	cout << "Node[" << data << "]: ";

	for (size_t i = 0; i < edges.size(); i++)
		cout << edges[i].destination->data;

	cout << endl;
}

