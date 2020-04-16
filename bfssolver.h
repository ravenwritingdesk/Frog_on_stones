//
//  bfssolver.h
//  DFS🐸
//
//  Created by 汪楚文 on 2019/6/29.
//  Copyright © 2019 汪楚文. All rights reserved.
//

#ifndef bfssolver_h
#define bfssolver_h
#include "solver.h"

class BFSsolver : public solver
{
public:
    BFSsolver(int size);
    ~BFSsolver();
    void solve();
};



#endif /* bfssolver_h */
