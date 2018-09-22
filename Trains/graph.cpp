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
	vector<Node> nodes;

	void new_route(string route);

private:
	Node* insert_node(char data);
	Node* node_exists(char data);
};

void Graph::new_route(string route)
{
	char n1 = route[0];
	char n2 = route[1];
	int  dist = stoi(route.substr(2, route.length())); // from index 2..-1 is the distance.

	Node* origin = insert_node(n1); 
	Node* destination = insert_node(n2); // In the second route insertion
										 // this modifies the value of 
										 // origin to have data equal to
										 // (-35) 'Y', which leads to
										 // undefined behavior.

	origin->insert_edge(dist, destination);
}

Node* Graph::node_exists(char data)
{
	Node* node = nullptr;
	for (size_t i = 0; i < nodes.size(); i++)
	{
		if (nodes[i].data == data)
		{
			node = &nodes[i];
			break;
		}
	}

	return node;
}

Node* Graph::insert_node(char data)
{
	Node* node = node_exists(data);

	if (!node)
	{
		node = new Node(data);
		nodes.push_back(*node);
	}

	return node;
}
