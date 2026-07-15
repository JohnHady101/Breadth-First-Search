#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
    vector<vector<int>> adjacency = {
        {1, 3, 4},
        {2},
        {0},
        {0, 5},
        {0, 5},
        {0}
    };

    // assuming root is the 0 node; consequently, level 1 would be x[0]
    vector<vector<int>> level = {{0}};
    level.push_back(adjacency[0]);


    // making a set of all elements in vector level; we will use it to prevent redundancy

    set<int> s;
    for (auto inner1: level){
        for (auto inner2: inner1){
            s.insert(inner2);
        }
    }

    while (True){
        for (int x: level[1]){
            for (int y: adjacency[x]){

            }


        }
    }


}