#include "graph.h"

void Graph::insert_node(Node* node)
{
	nodes.push_back(node);
}

Node* Graph::get_node(char data)
{
	for (size_t i = 0; i < nodes.size(); i++)
		if (nodes[i]->data == data) return nodes[i];

	return nullptr;
}