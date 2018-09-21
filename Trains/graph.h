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
	bool node_exists(char data);
};