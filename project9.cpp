#include <iostream>
#include <fstream>
#include <string>
#include "Trie.h"

int main() {
    Trie myTrie;

    if(!myTrie.isPrefix(""))
        std::cout<<"Fail"<<std::endl;
    if(myTrie.wordCount()!= 0)
        std::cout<<"fail"<<std::endl;

    myTrie.loadFromFile("words");

    if(myTrie.wordCount()!= 8)
        std::cout<<"Fail"<<std::endl;

    if(!myTrie.isWord("for") || !myTrie.isWord("fork") || !myTrie.isWord("top") || !myTrie.isWord
            ("topsy") || !myTrie.isWord("tops") || !myTrie.isWord("toss"))
        std::cout<<"fail"<<std::endl;

    if(myTrie.isWord("ford")|| myTrie.isWord("topsi") || myTrie.isWord("tos") )
        std::cout<<"Fail"<<std::endl;

    if(!myTrie.isPrefix("for"))
        std::cout<<"Fail"<<std::endl;

    if(myTrie.isPrefix("yo") || myTrie.isPrefix("topy") || myTrie.isPrefix("form"))
        std::cout<<"ail"<<std::endl;

    if(!myTrie.isPrefix("for"))
        std::cout<<"Fail"<<std::endl;

    if(myTrie.isWord("ter"))
        std::cout<<"fail"<<std::endl;
    if(myTrie.isPrefix("day"))
        std::cout<<"Fail"<<std::endl;
    if(myTrie.isPrefix("ester"))
        std::cout<<"Fail"<<std::endl;
    if(myTrie.isPrefix("fot"))
        std::cout<<"Fail"<<std::endl;



    //make sure prints all the words


}