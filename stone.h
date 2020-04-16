//
//  stone.h
//  DFS🐸
//
//  Created by 汪楚文 on 2019/6/28.
//  Copyright © 2019 汪楚文. All rights reserved.
//

#ifndef stone_h
#define stone_h
#define ICEFROG 1
#define FIREFORG 0
#define EMPTY -1
#include <string>
#include <utility>
#include <vector>
using namespace std;
class stones
{
public:
    stones(int a);//初始化石头的数量和石头上的青蛙
    stones(const stones & st);
    ~stones();
    int firstempty();//找到空的位置
    bool abletojump(int one);//判断在某一个位置上的青蛙是否可以跳
    bool finish();//判断是否达到要求
    int getlocation(int a);
    int getnumber();
    friend void swap(int a,int b);//便于交换数据
    void jumping(int a);//具体某一次的交换操作，将整个过程分治化（动作）
  //  void jumpnfs(int a);//整个跳跃过程，用递归和回溯实现(转移模型）nfs//原来想用这种方法实现，最后还是采取了用stack的a方法，这种方法以注释的形式保留
  //  void jumpbfs(int a);//整个跳跃过程，用迭代和回溯实现（转移模型）bfs
    void print();//用于结果的输出
   void printall();
private:
    int *location;
    int number;
    vector<int> m_transRecord;


};

#endif /* stone_h */
