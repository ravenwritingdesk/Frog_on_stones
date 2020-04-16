//
//  solver.h
//  DFS🐸
//
//  Created by 汪楚文 on 2019/6/29.
//  Copyright © 2019 汪楚文. All rights reserved.
//

#ifndef solver_h
#define solver_h
class solver
{
public:
    solver(int size);
    //@num 皇后的个数
    ~solver();
    virtual void solve()=0;
protected:
    int _size;

};

#endif /* solver_h */
