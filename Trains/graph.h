#pragma once
#include <vector>
#include <string>
class Node;

using std::vector;
using std::string;

class Graph
{
public:
	vector<Node> nodes;

	void new_route(string route);

private:
	void insert_node(char data);
	bool node_exists(char data);
};