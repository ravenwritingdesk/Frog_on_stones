//
//  stone.cpp
//  DFS🐸
//
//  Created by 汪楚文 on 2019/6/28.
//  Copyright © 2019 汪楚文. All rights reserved.
//

#include "stone.h"
#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <iomanip>
using namespace std;

 void swap(int a,int b){
    int k=a;
    a=b;
    b=k;
}

stones::stones(const stones & st){
    number= st.number;
        m_transRecord = st.m_transRecord;
    location= new int[number];
    for(int i = 0;i < number; i++){
       location[i] = st.location[i];
    }
}

stones::stones(int a)
{
    number=a;
    location= new int[a];
    for(int i = 0;i <= (a-3)/2;i++)
    {
        location[i]=ICEFROG+2*i;
    }
    for(int i =(a+1)/2;i<a;i++)
    {
        location[i]=FIREFORG+2*(i-(a+1)/2);
    }
    location[(a-1)/2] = EMPTY;
}
int stones::getlocation(int a){
    return location[a];
}
int stones::getnumber(){
    return number;
}
stones::~stones()
{
  delete [] location;
}

//在找出空位的前提下，判断某一个位置的青蛙能不能调到这个空位
bool stones::abletojump(int one)
{
    int startingpoint = firstempty();//记录下空位所在的位置
    switch(location[one]%2)
    {
    case ICEFROG:
        if(startingpoint > one && startingpoint <= one + 2)
            return true;
         else return false;
    case FIREFORG:
        if(startingpoint < one && startingpoint >= one - 2)
            return true;
        else return false;
    case EMPTY:
        return false;
    }
}
//由于一次只会留一个空位，下一次青蛙跳的时候一定是跳到这个空位，故需要提前将其找出来
int stones::firstempty()
{
    int i;
    for (i = 0; i < number; i++)
        if (location[i] == EMPTY)
            break;
    return i;

}
//判断是否青蛙已经交换完毕
bool stones::finish()
{
    for(int i=0;i<=(number-3)/2;i++)
    {
        if(location[i]%2!=FIREFORG)
            return false;
    }
    for(int i=(number+1)/2;i<number;i++)
    {
        if(location[i]%2!=ICEFROG)
            return false;
    }
    return true;
}
//实现青蛙“跳”的操作，程序的本质是交换location的内容
void stones::jumping(int a)
{
     m_transRecord.push_back(a);
    int k = firstempty();
    int tmp = location[a];
    location[a] = location[k];
    location[k] = tmp;

    //swap(loc1,loc2)
}

//打印石头状态
void stones::print()
{
    for(int i = 0; i < number; i++)
    {
        if(location[i]%2 == ICEFROG)
            cout << "A"<<(location[i]+1)/2<<" ";
        else if(location[i]%2==FIREFORG)
            cout << "B"<<location[i]/2+1<<" ";
        else if(location[i] == EMPTY)
            cout << "C ";
    }
    cout << endl;
}


void stones::printall()
{

        cout << ">imput i or 0 to print it or not " << " Input '1' or '0' :" << endl;
        int cmd;
        cin >> cmd;
        if(cmd == 1){
            auto it = m_transRecord.begin();
            stones tmp(number);
            cout << "State " << setw(3) << 0 << " : ";
            tmp.print();
            for(int i = 1;it < m_transRecord.end(); ++i, ++it)
            {
                tmp.jumping(*it);
                cout << "State " << setw(3) << i << " : ";
                tmp.print();
            }
            cout << "Printed !" << endl;
        }
    }



/*void stones::jumpnfs(int a)
{
    if(finish())
    {
        printall();
        return;
    }
    else
    {
        int last;
        //从第1块（对应下标0）石头上开始计算可以移动的frog
        for(int i = 0; i < number; i++)
        {
            //记录下这步中空位的初始位置，方便回溯
            last = firstempty();
            //如果第i+1块石头上的青蛙可以移动
            if(abletojump(i))
            {
                //移动第i+1块石头上的青蛙
                jump(i);

                node[a] = i;

                //进入下一次的递归
                jumpnfs(a+1);

                //回溯，将青蛙移回原来的位置
                jump(last);
            }
        }
    }
}*/
