#include <string>
#include "coin_flip.h"
#include "rand_n.h"

std::string CoinFlip() {
   return (RandN() == 0) ? "Tails" : "Heads";
}