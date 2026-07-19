#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
    vector<vector<int>> adjacency = {
        {1, 3, 4},
        {2, 0},
        {1, 6},
        {0, 5},
        {0, 5},
        {3, 4}
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
    
    int l = 1;

    while (true){
        // dynamically allocating a vector to be add later to the level vector
        vector<int>* v = new vector<int>();

        for (int x: level[l]){
            for (int y: adjacency[x]){

                if (s.find(y) == s.end()){
                    v->push_back(y);
                    s.insert(y);

                }
            }

        }
        if ((*v).size() != 0){
            level.push_back(*v);
            l++;
        }
        else break;

        delete v;

    }


}