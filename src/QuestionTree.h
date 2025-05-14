// write your QuestionTree code here
#ifndef _QUESTIONSTREE_H_
#define _QUESTIONSTREE_H_

#include "UserInterface.h"
#include "QuestionNode.h"
#include <iostream>

class QuestionTree{
private:
    QuestionNode* node;
    UserInterface* inOrOut;
    void playHelper(QuestionNode* node);
public:
    QuestionTree(UserInterface* ui);
    void play();
    void save(std::ostream* output);
    void load(std::istream* input);
    int totalGames();
    int gamesWon();
    ~QuestionTree();
};




#endif
