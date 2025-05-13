// write your QuestionNode code here
#ifndef _QUESTIONNODE_H_
#define _QUESTIONNODE_H_

#include <string>
struct QuestionNode
{
    std::string data;
    QuestionNode* left;
    QuestionNode* right;
    QuestionNode(std::string data);
};

#endif
