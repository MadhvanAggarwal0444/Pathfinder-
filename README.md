Pathfinding Visualizer (C++)

A simple Pathfinding Visualizer implemented in C++ that demonstrates how shortest-path algorithms explore a grid and find the optimal path between two points while avoiding obstacles.

This project helps understand fundamental graph traversal algorithms used in many real-world systems like navigation systems, robotics, and game AI.

Features

Grid-based pathfinding environment

Start and end node selection

Obstacles that block the path

Shortest path calculation

Console visualization of the final path

Algorithms Implemented

The project demonstrates classic graph algorithms:

Breadth First Search (BFS) – guarantees shortest path in an unweighted grid

Dijkstra's Algorithm – shortest path for weighted graphs

A* – optimized pathfinding using heuristics

Grid Representation

The grid is represented using a 2D static array.

Symbols used:

Symbol	Meaning
S	Start node
E	End node
#	Obstacle
.	Path

Example grid:

S . . # .
. # . # .
. # . . .
. # # # .
. . . # E

How It Works

The program scans the grid to locate the start node.

A queue is used to explore neighboring cells.

Valid neighbors are pushed into the queue.

The algorithm continues until the end node is reached.

The shortest path is reconstructed using a parent array.

Concepts Demonstrated

This project demonstrates important Data Structures and Algorithms concepts:

Graph traversal

Breadth First Search

Grid based graphs

Queue data structure

Shortest path reconstruction

Technologies Used

C++

Static arrays

Queue from STL

Console output

Example Output

Path Found!

S . . # .
. # . # .
. # . . .
. # # # .
. . . . E

Future Improvements

Possible enhancements for the project:

Interactive grid input

Visualization with graphics (SFML)

A* heuristic optimization

Animation of search process
