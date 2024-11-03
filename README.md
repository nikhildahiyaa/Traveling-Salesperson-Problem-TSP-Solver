
# Traveling Salesperson Problem (TSP) Solver

This project provides a solution for the Traveling Salesperson Problem (TSP) using C++. It includes a set of classes and methods to represent and solve the TSP, a classic optimization problem that seeks to find the shortest possible route that visits a list of points once and returns to the origin point.

## Table of Contents
- [Project Structure](#project-structure)
- [Installation](#installation)
- [Usage](#usage)
- [Files](#files)
- [Contributing](#contributing)
- [License](#license)

## Project Structure
The project is divided into several files:
- **Point**: Represents a point in a 2D space.
- **ListOfPoints**: Manages a collection of points.
- **TSPCycle**: Defines the cycle representing the tour.
- **TSPSolver**: Contains algorithms for solving the TSP problem.

## Installation
To build and run the project, ensure you have a C++ compiler installed.

1. Clone this repository to your local machine.
   ```bash
   git clone https://github.com/your-username/your-repo-name.git
   cd your-repo-name
   ```

2. Compile the project using the provided Makefile.
   ```bash
   make
   ```

This will generate an executable named `tsp_solver` or as defined in the Makefile.

## Usage
To run the program, use the following command:
```bash
./tsp_solver
```

The program will read points from a predefined input file (or prompt for points, depending on your code) and solve the TSP, outputting the solution cycle and its total distance.

## Files

- **main.cpp**: The main entry point of the program.
- **point.cpp / point.hpp**: Defines the Point class to represent a 2D point.
- **listofpoints.cpp / listofpoints.hpp**: Implements a collection of points for use in the TSP.
- **tspcycle.cpp / tspcycle.hpp**: Defines the cycle for visiting points in sequence.
- **tspsolver.cpp / tspsolver.hpp**: Contains the solution algorithms for TSP.
- **Makefile**: Build configuration file for compiling the project.

## Contributing
Contributions are welcome! Please submit a pull request with your updates.

## License
This project is licensed under the MIT License.
