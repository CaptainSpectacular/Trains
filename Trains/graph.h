#pragma once
#include <vector>
#include "node.h"

using std::vector;

class Graph
{
public:
	vector<Node*> nodes;

	void insert_node(Node* node);
	Node* get_node(char data);
};