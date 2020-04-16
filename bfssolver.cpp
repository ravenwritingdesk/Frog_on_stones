//
//  bfssolver.cpp
//  DFS🐸
//
//  Created by 汪楚文 on 2019/6/29.
//  Copyright © 2019 汪楚文. All rights reserved.
//


#include "solver.h"
#include "bfssolver.h"
#include "stonenode.h"
#include<queue>
#include<iostream>

using namespace std;

BFSsolver::BFSsolver(int size):solver(size)
{}

BFSsolver::~BFSsolver()
{}

void BFSsolver::solve(){
    queue<stonenode> nodes;
    stonenode  n0(this->_size);
    nodes.push(n0);
    while(!nodes.empty()){
        stonenode crntNode = nodes.front();
        nodes.pop();
        stones st = crntNode.getState();

        if(st.finish()){
            cout<<"finish searching!";
            st.printall();
            break;
        }

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

