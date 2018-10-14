#include "graph_analyzer.h"
#include "graph.h"
#include "node.h"
#include "edge.h"

GraphAnalyzer::GraphAnalyzer(Graph* graph)
{
	this->graph = graph;
}

int GraphAnalyzer::calculate_distance(string path)
{
	int sum = 0;
	for (int i = 0; i < path.length() - 2; i += 2)
	{
		Node* current = graph->get_node(path[i]);
		Edge* next = current->get_edge(path[i + 2]);
		if (next)
			sum += next->distance;

		else
			return -1;
	}

	return sum;
}

