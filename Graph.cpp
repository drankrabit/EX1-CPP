#include <iostream>
#include <vector>

using namespace std;

class Graph {
private:
    int V; // Number of vertices in the graph
    vector<vector<int>> adjacencyMatrix; // Adjacency matrix

public:
    // Constructor that takes the refrance of an adjacency matrix and loads it into the graph
    Graph(vector<vector<int>> &matrix) {
        V = matrix.size();
        adjacencyMatrix = matrix;
    }

    // Function that takes the refrance of an adjacency matrix and loads it into the graph
    void loadGraph(vector<vector<int>> &matrix) {
        V = matrix.size();
        adjacencyMatrix = matrix;
    }

    // Function that prints the representation of the graph
    void printGraph() {
        cout << "Adjacency Matrix of the graph:\n";
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                cout << adjacencyMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};