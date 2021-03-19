//This file contains all the logic behind the graph i.e the probability of having an edge the camera moves and the coloring.
#include "framework.h"
#include "Source.h"

//Constuctors
Node::Node(){}
Node::Node(vec2 position) {
	this->position = position;
}

//Constructor
Edge::Edge(Node n1, Node n2) {
	this->n1 = n1;
	this->n2 = n2;
}
