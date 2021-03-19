#pragma once

class Node {
private:
	vec2 position;			//position attributes
public:
	//Constuctors
	Node();
	Node(vec2 position);
};


class Edge {
private:
	Node n1, n2;		//End nodes
public:
	//Constructor
	Edge(Node n1, Node n2);
};
