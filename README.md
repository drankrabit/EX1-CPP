Graphs and Algorithms Library

Description:
-------------------------
This library provides classes and algorithms for working with graphs. It includes a Graph class for representing graphs using an adjacency matrix, and various algorithms such as checking connectivity, finding shortest paths, detecting cycles, checking bipartiteness, and detecting negative weight cycles.

Implementation:
-------------------------
1. Graph Class (Graph.hpp, Graph.cpp):
   - The Graph class represents a graph using an adjacency matrix.
   - The adjacency matrix is stored as a 2D vector.
   - The class provides methods to:
     - Construct a graph using a given adjacency matrix.
     - Load a graph with a given adjacency matrix.
     - Print the adjacency matrix of the graph.
     - Get the number of vertices in the graph.
     - Get the adjacency matrix of the graph.

2. Algorithms Class (Algorithms.hpp, Algorithms.cpp):
   - The Algorithms class provides various graph algorithms.
   - The class includes static methods for:
     - Checking connectivity of a graph using BFS.
     - Finding the shortest path between two vertices using BFS.
     - Detecting cycles in a graph using DFS.
     - Checking if a graph is bipartite using BFS.
     - Detecting negative weight cycles using Bellman-Ford algorithm.
   
Division of Code:
-------------------------
1. Graph Class:
   - Graph.hpp: Header file containing the declaration of the Graph class.
   - Graph.cpp: Source file containing the implementation of the Graph class.

2. Algorithms Class:
   - Algorithms.hpp: Header file containing the declaration of the Algorithms class.
   - Algorithms.cpp: Source file containing the implementation of the Algorithms class.

Functions:
-------------------------
1. isConnected(const Graph &g)
   - Description: Checks if the graph is connected.
   - Parameters: 
     - g: Reference to a Graph object.
   - Returns: 
     - true if the graph is connected, false otherwise.
   - How it Works:
     - Uses Breadth First Search (BFS) to traverse the graph from a starting vertex.
     - If all vertices are visited during the traversal, the graph is connected.

2. shortestPath(const Graph &g, int start, int end)
   - Description: Finds the shortest path between two vertices using BFS.
   - Parameters: 
     - g: Reference to a Graph object.
     - start: The starting vertex.
     - end: The ending vertex.
   - Returns: 
     - A string representing the shortest path.
   - How it Works:
     - Uses Breadth First Search (BFS) to find the shortest path between two vertices.
     - Computes the shortest path from the starting vertex to all other vertices and reconstructs the path to the destination vertex.

3. isContainsCycle(const Graph &g)
   - Description: Checks if the graph contains a cycle.
   - Parameters: 
     - g: Reference to a Graph object.
   - Returns: 
     - A string representing the cycle if found, "0" otherwise.
   - How it Works:
     - Uses Depth First Search (DFS) to traverse the graph and detect cycles.
     - If a back edge is encountered during the traversal, a cycle is detected.

4. isBipartite(const Graph &g)
   - Description: Checks if the graph is bipartite.
   - Parameters: 
     - g: Reference to a Graph object.
   - Returns: 
     - A string indicating whether the graph is bipartite and its partition.
   - How it Works:
     - Uses Breadth First Search (BFS) to color the vertices of the graph with two colors.
     - If at any point, two adjacent vertices have the same color, the graph is not bipartite.

5. negativeCycle(const Graph &g)
   - Description: Checks if the graph contains a negative weight cycle.
   - Parameters: 
     - g: Reference to a Graph object.
   - Returns: 
     - true if the graph contains a negative weight cycle, false otherwise.
   - How it Works:
     - Uses Bellman-Ford algorithm to find the shortest paths from a single source vertex to all other vertices.
     - If during the relaxation step, the distance to any vertex is updated after the |V| - 1th iteration, a negative weight cycle exists.
