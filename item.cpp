#include "item.h"

item::item(unsigned int p, float w){
    price = p;
    weight = w;
    canBeSold = true;
}

item::item(unsigned int p, float w, bool cbs){
    price = p;
    weight = w;
    canBeSold = cbs;
}

item::~item(){

}

item::getPrice(){
   return price; 
}

item::getWeight(){
    return weight;
}

item::canSell(){
    return canBeSold;
}
