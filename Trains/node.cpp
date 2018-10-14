#include "node.h"
#include "edge.h"

Node::Node(char data)
{
	this->data = data;
}

void Node::print_edges()
{
	for (size_t i = 0; i < edges.size(); i++)
		cout << edges[i]->destination->data;
}

void Node::insert_edge(Edge* edge)
{
	edges.push_back(edge);
}

Edge* Node::get_edge(char data)
{
	for (size_t i = 0; i < edges.size(); i++)
		if (edges[i]->destination->data == data) return (edges[i]);
	
	return nullptr;
}