#ifndef ITEM.H
#define ITEM.H
class item{
    private:
        unsigned int price;
        float weight;
        bool canBeSold;
    public:
        item(unsigned int p, float w);
        item(unsigned int p, float w, bool cbs);
}
#endif
