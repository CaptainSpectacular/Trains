#include "node.h"

// should include edge.h and use the class definition therein rather than duplicating here.
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
