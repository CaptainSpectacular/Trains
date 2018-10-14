#pragma once
class Node;

class Edge
{
public:
	int distance;
	Node* destination;

	Edge(int distance, Node* destination);
};