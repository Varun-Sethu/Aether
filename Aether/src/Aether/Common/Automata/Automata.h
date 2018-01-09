//
// Created by varun on 9/01/2018.
//

#ifndef AETHER_AUTOMATA_H
#define AETHER_AUTOMATA_H

#include <vector>

// TODO: Split file into corresponding .cpp/.h files

// Grammar is a class for describing deterministic finite automata to represent grammars for various language constructs
template <typename T>
class Grammar {

    // Construct
    explicit Grammar(std::vector<T> terminalSet /* Vt */, std::vector<T> nonTerminalSet /* Vn */,
                     unsigned startIndex /* Index of the start of the DFA, must be in the nonTerminal Set*/,
                    std::vector<std::vector<unsigned int>> productions /* Full list of productions generated from the index of the origional terminal and non terminal sets*/) {
        this->_terminalSet = terminalSet;
        this->_nonTerminalSet = nonTerminalSet;
        this->_startIndex = startIndex;
        this->_productions = productions;
    }

    /*
     * Definitions to make class easier to work with:
     * V denotes: Vt ∪ Vn, and Vt ∩ Vn =/ 0)
     */


    // Getter functions
    std::vector<T> getTerminalSet() {
        return this->_terminalSet;
    }
    std::vector<T> getNonTerminalSet() {
        return this->_nonTerminalSet;
    }
    unsigned getStart() {
        return this->_startIndex;
    }
    std::vector<std::vector<unsigned int>> getProductions() {
        return this->_productions;
    }



private:
    std::vector<T> _terminalSet;
    std::vector<T> _nonTerminalSet;
    unsigned _startIndex;
    std::vector<std::vector<unsigned int>> _productions;
};



#endif //AETHER_AUTOMATA_H
