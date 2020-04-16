//
//  dfssolver.cpp
//  DFS🐸
//
//  Created by 汪楚文 on 2019/6/29.
//  Copyright © 2019 汪楚文. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "solver.h"
#include "dfssolver.h"
#include "stonenode.h"
#include<stack>
#include<iostream>
using namespace std;

DFSsolver::DFSsolver(int size):solver(size)
{}

DFSsolver::~DFSsolver()
{}

void DFSsolver::solve(){
    stack<stonenode> nodes;
    stonenode  n0(this->_size);
    nodes.push(n0);
    while(!nodes.empty()){
        stonenode crntNode = nodes.top();
        nodes.pop();
        stones st = crntNode.getState();

        if(st.finish()){
            cout<<"finish searching!";
           st.printall();

            break;
        }

        //      int i = st.getlocation[i];
        //    if(!st.finish()){
        //        stonenode child = crntNode.jump(i);
        //         nodes.push(child);

        //从第1块（对应下标0）石头上开始计算可以移动的frog
        for(int i = 0; i < _size; i++)
        {

            if(st.abletojump(i))
            {
                stonenode child = crntNode.jump(i);
                nodes.push(child);
            }
        }
    }

}

