#include <iostream>
#include <vector>
#include <algorithm>
#include "edge.h"

using std::vector;
using std::find;

class Node
{
public:
	vector<Edge> edges;
	char data;

	Node(char data);
	void newEdge(int distance, Node* destination);
};

Node::Node(char data)
{
	this->data = data;
}

void Node::newEdge(int distance, Node* destination)
{
	Edge* e = new Edge(distance, destination);
	vector<char> values;
	for (size_t i = 0; i < edges.size(); i++)
	{
		Edge temp = edges[i];
		values.push_back(temp.destination->data);
	}
	if (find(values.begin(), values.end(), destination->data) != values.end())
		edges.push_back(*e);

}

