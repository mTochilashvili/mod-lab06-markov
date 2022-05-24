// Copyright 2022 UNN-IASR
INCLUDE_TEXTGEN_H_
#include <deque>
#include <map>
#include <string>
#include <vector>

class Markov {
 private:
    typedef deque<string> prefix;
    map<prefix, vector<string>> statelab;
    int NPREF = 2;
    int MAXGEN = 1000;

 public:
    Markov(std::vector<string> allwords, int prfx_count, int gen_count);
    Markov(std::map<prefix, vector<string>> Gen, int gen_count);
    string TextGen();
};
