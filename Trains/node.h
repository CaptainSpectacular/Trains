#pragma once
#include <vector>
#include <iostream>
class Edge;

using std::vector;
using std::cout;
using std::endl;

class Node
{
public:
	vector<Edge*> edges;
	char data;

	Node(char data);
	void print_edges();
	void insert_edge(Edge* destination);
};