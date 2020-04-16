//
//  stonenode.cpp
//  DFS🐸
//
//  Created by 汪楚文 on 2019/6/29.
//  Copyright © 2019 汪楚文. All rights reserved.
//

#include <stdio.h>
#include "stonenode.h"
#include "stone.h"

stonenode::stonenode(int size):_state(size)
{
}

stonenode::~stonenode()
{
}

stonenode::stonenode(const stonenode &node):_state(node._state){
}

stonenode stonenode::jump(int i){
    stonenode child(*this);
    child._state.jumping(i);
    return child;
}

stones & stonenode::getState(){
    return this->_state;
}
