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
	void insert_node(char data);
	bool node_exists(char data);
};

void Graph::new_route(string route)
{
	char n1 = route[0];
	char n2 = route[1];
	int  dist = stoi(route.substr(2, route.length())); // from index 2..-1 is the distance.

	if (!node_exists(n1))
		insert_node(n1);

	if (!node_exists(n2))
		insert_node(n2);
}

bool Graph::node_exists(char data)
{
	vector<char> raw_values;
	for (size_t i = 0; i < nodes.size(); i++)
		raw_values.push_back(nodes[i].data);

	return (find(raw_values.begin(), raw_values.end(), data) != raw_values.end());
}

void Graph::insert_node(char data)
{
	Node *n = new Node(data);
	nodes.push_back(*n);
	free(n);
}