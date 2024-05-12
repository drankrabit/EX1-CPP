// ID: 326538022
// Email: itay.alexandrov@gmail.com

#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <iostream>
#include <vector>

namespace ariel {

class Graph {
private:
    size_t V; // Number of vertices
    std::vector<std::vector<int>> adjacencyMatrix; // Adjacency matrix representation of the graph

public:
    // Default constructor
    Graph() : V(0), adjacencyMatrix(std::vector<std::vector<int>>()) {}

    // Constructor that initializes the graph with a given adjacency matrix
    Graph(std::vector<std::vector<int>> &matrix);

    // Method to load a graph with a given adjacency matrix
    void loadGraph(std::vector<std::vector<int>> &matrix);

    // Method to print the adjacency matrix of the graph
    void printGraph();

    // Getter method to return the number of vertices
    size_t getV() const { return V; }

    // Getter method to return the adjacency matrix
    const std::vector<std::vector<int>>& getAdjacencyMatrix() const { return adjacencyMatrix; }
};

} // namespace ariel

#endif // GRAPH_HPP
