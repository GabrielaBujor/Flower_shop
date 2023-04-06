#ifndef FLOWER_H
#define FLOWER_H
#include <string>

class flower
{
    public:
        flower(std::string flowerName);
        void display();
        virtual ~flower();

    protected:

    private:
         std::string name;
         int waterPeriod;
         std::string blooming;
         std::string pests;
         std::string family;
         std::string colors;
         std::string fertilizer;
};

#endif // FLOWER_H
