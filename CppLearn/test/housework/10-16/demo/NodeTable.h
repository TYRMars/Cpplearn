//
// Created by zhang on 2017/10/16.
//

#ifndef DEMO_NODETABLE_H
#define DEMO_NODETABLE_H

#include <string>
using namespace std;

class CNode//节点
{
public:
    string data;
    CNode *next;
    CNode()
    {
        next=NULL;
    }
};

class CList
{
private:
    CNode *head;                      //头节点
public:
    string stuNumber;
    string stuName;
    string stuSex;
    string stuType;
    int stu_num;
    CList();
    void InputIn();
    void OutputIn();
    void Sort();                      //排序
    void InitFromTxt();               //创建链表
    void Update()const;
    void Display()const;              //显示链表
    void Delete_list(string a);
    int SystemInit();
    bool Find(const string e) const;
};



#endif //DEMO_NODETABLE_H
