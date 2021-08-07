// This file is for creating the cards that will be used in the deck

#include <algorithm>
#include <cassert>
#include <deque>
#include <functional>
#include <iostream>
#include <iterator>
#include <limits>
#include <list>
#include <map>
#include <math.h>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
#include <stack>
#include <queue>
#include <deque>

class Card {
public:

    // returns color of the card if it has one or if it's wild
    std::string getColor();

    // returns card type; if it's a number, draw, reverse, or skip
    std::string getType();

    const char const *COLOR_CATEGORIES[5] = {
        "Red",
        "Blue",
        "Green",
        "Yellow",
        "Wild"
    };

    const char const *TYPE_CATEGORIES[15] = {
        "zero",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
        "draw 2",
        "reverse",
        "skip",
        "color change",
        "draw 4"
    };

private:

    // contains what color the card is or if it's a wild card
    std::string color;
    // contains what type it is
    std::string number;
};