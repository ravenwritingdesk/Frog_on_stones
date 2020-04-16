//
//  stonenode.h
//  DFS🐸
//
//  Created by 汪楚文 on 2019/6/29.
//  Copyright © 2019 汪楚文. All rights reserved.
//

#ifndef stonenode_h
#define stonenode_h
#include "stone.h"
class stonenode
{
public:
    stonenode(int size);
    ~stonenode();
    stonenode (const stonenode & node);
    stonenode jump(int i);
    stones & getState();

private:
    stones _state;
};


#endif /* stonenode_h */
