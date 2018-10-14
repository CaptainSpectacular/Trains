#include <iostream>
#include "edge.h"
#include "node.h"
#include "graph.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	// Iteration 0 setup.
	Graph* graph = new Graph();
	Node* n1 = new Node('A');
	Node* n2 = new Node('B');
	Node* n3 = new Node('C');
	Node* n4 = new Node('D');
	Node* n5 = new Node('E');
	
	graph->insert_node(n1);
	graph->insert_node(n2);
	graph->insert_node(n3);
	graph->insert_node(n4);
	graph->insert_node(n5);
	
	size_t size = graph->nodes.size();
	cout << "Total nodes: " << size << endl;
	cout << "Graph nodes: " << endl;
	for (size_t i = 0; i < size; i++)
		cout << graph->nodes[i]->data << endl;

	cout << "The beginning" << endl;

	cin.get();
}