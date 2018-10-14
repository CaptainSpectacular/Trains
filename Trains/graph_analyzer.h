#pragma once
class Graph;

#include <string>

using std::string;

class GraphAnalyzer
{
public:
	GraphAnalyzer(Graph* graph);
	int calculate_distance(string route);

private:
	Graph* graph;
};