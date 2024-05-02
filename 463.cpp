#include <iostream>
#include <vector>
#include <cassert>
#include <iostream>
#include <stack>
#include <vector>
using namespace std;
struct Coordinate {
  int x;
  int y;
};
enum class Land {
  UnvisitedLand,
  VisitedLand,
  Water,
};
class Solution {
using enum Land;
public:
    vector<Coordinate> listNeighbors(vector<vector<int>>& grid, Coordinate point) {
      vector<Coordinate> neighbors;
      for (int dx : {-1,1}) {
        neighbors.push_back(Coordinate{point.x+dx, point.y});
      }
      for (int dy : {-1,1}) {
        neighbors.push_back(Coordinate{point.x, point.y+dy});
      }
      return neighbors;
    }
    Land classifySquare(vector<vector<int>>& grid, Coordinate point){
      if (point.x < 0 || point.x >= grid.size() || point.y < 0 || point.y >= grid[point.x].size()) {
        return Water;
      }
      if (grid[point.x][point.y] == 0) {
        return Water;
      }
      if (grid[point.x][point.y] == 2) {
        return VisitedLand;
      }
      return UnvisitedLand;
    }
    int crawlLand(vector<vector<int>>& grid, Coordinate startingPoint) {
      stack<Coordinate> toVisit;
      toVisit.push(startingPoint);
      grid[startingPoint.x][startingPoint.y] = 2;
      int perimeter = 0;
      while(!toVisit.empty()){
        Coordinate currentPoint = toVisit.top();
        cout << "Stack size before pop is: " << toVisit.size() << '\n';
        toVisit.pop();
        cout << "Current point is (" << currentPoint.x << ", " << currentPoint.y << ")\n";
        
        for (Coordinate neighbor : listNeighbors(grid, currentPoint)) {
          switch (classifySquare(grid, neighbor)) {
            case Water:
              ++perimeter;
              break;
            case VisitedLand:
              break;
            case UnvisitedLand:
              toVisit.push(neighbor);
              grid[neighbor.x][neighbor.y] = 2;
              break;
          }
        }
      }
      return perimeter;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
      for (int x = 0; x < grid.size(); ++x) {
        for (int y = 0; y < grid[x].size(); ++y) {
          if (grid[x][y] == 1) {
            return crawlLand(grid, Coordinate{x, y});
          }
        }
      }
      return 0;
    }
};
int main() {
  return 0;
}
