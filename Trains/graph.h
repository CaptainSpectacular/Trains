#pragma once
#include <vector>
#include <string>
#include "route.h"
class Node;

using std::vector;
using std::string;

class Graph
{
public:
	vector<Node*> nodes;

	void new_route(Route* route);

private:
	Node* insert_node(char data);
	Node* get_node(char data);
};