#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include "node.h"

using std::vector;
using std::string;
using std::cout;
using std::endl;

class Graph
{
public:
	vector<Node*> nodes;

	void new_route(string route);

private:
	Node* insert_node(char data);
	Node* node_exists(char data);
};

void Graph::new_route(string route)
{
	char n1 = route[0];
	char n2 = route[1];
	int  dist = stoi(route.substr(2, route.length()));
	
	Node* origin = node_exists(n1); 
	Node* destination = node_exists(n2);

	if (!origin)
		origin = insert_node(n1);

	if (!destination)
		destination = insert_node(n2);

	if (!origin->has_edge(n2))
		origin->insert_edge(dist, destination);
}

Node* Graph::node_exists(char data)
{
	for (size_t i = 0; i < nodes.size(); i++)
	{
		if (nodes[i]->data == data)
			return nodes[i];
	}
	return nullptr;
}

Node* Graph::insert_node(char data)
{
	Node* node = new Node(data);
	nodes.push_back(node);
	return nodes.back();
}
