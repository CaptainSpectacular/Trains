#include "node.h"

class Edge
{
public:
	int distance;
	Node* destination;

	Edge(int distance, Node* destination);
};

Edge::Edge(int dist, Node* dest)
{
	this->distance = dist;
	this->destination = dest;
}