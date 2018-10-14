#pragma once
#include <vector>
class Edge;

using std::vector;

class Node
{
public:
	vector<Edge*> edges;
	char data;

	Node(char data);
};