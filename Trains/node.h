#pragma once
#include <vector>
class Edge;

class Node
{
public:
	std::vector<Edge*> edges;
	char data;

	Node(char data);
	void insert_edge(int distance, Node* destination);
	void print_edges();
};