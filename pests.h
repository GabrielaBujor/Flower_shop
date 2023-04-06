#ifndef PESTS_H
#define PESTS_H
#include <string>


class pests
{
    public:
        pests(std::string pestName);
        void display();
        virtual ~pests();

    protected:

    private:
        std::string name;
        std::string spraySolution;
        int waterPeriod;
};

#endif // PESTS_H
