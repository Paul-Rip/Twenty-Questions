// write your QuestionTree code here
#include "QuestionTree.h"

QuestionTree::QuestionTree(UserInterface* ui){
    node = new QuestionNode("computer");
    inOrOut = ui;
}
void QuestionTree::playHelper(QuestionNode* node){
    std::string input;
    if(node->left == nullptr && node->right == nullptr){
        std::cout << "Would your object happen to be " << node->data << "?";
        getline(cin, input);
        std::cout << std::endl;
    }
}
void QuestionTree::play(){
    QuestionNode* temp = node;
    playHelper(temp);
}
void QuestionTree::save(std::ostream* output){

}
void QuestionTree::load(std::istream* input){

}
int QuestionTree::totalGames(){
    return 0;
}
int QuestionTree::gamesWon(){
    return 0;
}
QuestionTree::~QuestionTree(){

}
