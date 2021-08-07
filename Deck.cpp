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
#include "Deck.h"

// Default constructor will initialize and fill in the DeckPille
Deck::Deck() {
    int deckIndex = 0;
    // each iteration of this loop adds set 1(there's 4) full set of the colored
    // number cards, 1 wild card, and 1 draw 4 wild card
    for(size_t color = 0; color < 4; color++) {
        //this for loop adds the number cards for each color
        
    }
}