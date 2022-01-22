#ifndef BOT_H
#define BOT_H

#include <iostream>
#include "chessman.h"
#include "board.h"
#include <vector>
#include <string>
#include <random>


class bot {
private:
    std::string& name;
    board& b;
    bool maiusc;

    std::vector<coords> updatedSet;
    std::vector<coords> allMoves;
    coords start;
    coords end;
    short indexFrom;
    short indexTo;
    short randPromotion;
    std::vector<char>PromotionSet = {'d', 't', 'a', 'c'};

public:

    explicit bot(std::string &n, bool set, board &bVar); 
    ~bot();

    

    std::pair<coords, coords> generateRandomMove();

    bool handledraw();

    bool requestDraw();

    char handlePromotion();

    std::string& get_name() const;
};

#endif