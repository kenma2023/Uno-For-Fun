// contains the 108 card deck and its various functions

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

#include "Card.h"

class Deck{
public:
    Deck();

    void shuffle();

    Card deal_one();

    bool empty() const;
private:
    // this is the full 108 card deck
    std::array<Card, 108> DeckPile;
    
    
};