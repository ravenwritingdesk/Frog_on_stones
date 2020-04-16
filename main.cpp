//
//  main.cpp
//  DFS🐸
//
//  Created by 汪楚文 on 2019/6/28.
//  Copyright © 2019 汪楚文. All rights reserved.
//

#include <iostream>

#include "stone.h"
#include "dfssolver.h"
#include "bfssolver.h"
using namespace std;

int numberofstones;
int main() {
    cout<<"input the number: ";
 cin>>numberofstones;
    int k;
    cout<<"input 0 or 1 to choose between dfs and bfs: ";
    cin>>k;
    BFSsolver solver1(numberofstones);
    DFSsolver solver(numberofstones);
    switch (k) {
        case 0:

            solver.solve();
            break;

        case 1:

            solver1.solve();
            break;
    }
   ///对各石头上的物体进行初始化

    return 0;

//    stones land(numberofstones);
 //   land.jumpnfs(0);

   // land.printall();


}
