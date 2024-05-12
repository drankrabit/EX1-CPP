// ID: 326538022
// Email: itay.alexandrov@gmail.com

#include "Graph.hpp"

namespace ariel {

// Constructor implementation
Graph::Graph(std::vector<std::vector<int>> &matrix) {
    V = matrix.size();
    adjacencyMatrix = matrix;
}

// Method to load graph implementation
void Graph::loadGraph(std::vector<std::vector<int>> &matrix) {
    // Check if the matrix is square
    if (matrix.size() != matrix[0].size()) {
        throw std::invalid_argument("Invalid graph: The graph is not a square matrix.");
    }
    V = matrix.size();
    adjacencyMatrix = matrix;
}

// Method to print the adjacency matrix of the graph
void Graph::printGraph() {
    std::cout << "Adjacency Matrix of the graph:\n";
    for (size_t i = 0; i < adjacencyMatrix.size(); i++) {
        for (size_t j = 0; j < adjacencyMatrix[i].size(); j++) {
            std::cout << adjacencyMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

} // namespace ariel
