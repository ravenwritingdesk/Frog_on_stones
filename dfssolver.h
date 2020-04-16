//
//  dfssolver.h
//  DFS🐸
//
//  Created by 汪楚文 on 2019/6/29.
//  Copyright © 2019 汪楚文. All rights reserved.
//

#ifndef dfssolver_h
#define dfssolver_h
#include "solver.h"


class DFSsolver : public solver
{
public:
    DFSsolver(int size);
    ~DFSsolver();
    void solve();
};

#endif /* dfssolver_h */
