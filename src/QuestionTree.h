// write your QuestionTree code here
#ifndef _QUESTIONSTREE_H_
#define _QUESTIONSTREE_H_

#include "UserInterface.h"
#include "QuestionNode.h"
#include "QuestionNode.h"

class QuestionTree{
    private:
    QuestionNode* node;
    public:
    QuestionTree(UserInterface* ui);
    void play();
    void save(ostream* output);
    void load(istream* input);
    int totalGames();
    int gamesWon();
    ~QuestionTree();
};




#endif
