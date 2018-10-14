#pragma once
#include <vector>
class Node;

using std::vector;

class Graph
{
public:
	vector<Node*> nodes;

	void insert_node(Node* node);
};