#include "pests.h"
#include <iostream>
#include <string>

pests::pests(std::string pestName)
{
    //ctor
    this->name=pestName;
    if(pestName=="snails") {this->spraySolution="a mix of ethanol and water"; this->waterPeriod=5; }
    else
        if(pestName=="caterpillars") {this->spraySolution="a mix of molasses, dish soap and warm water"; this->waterPeriod=5; }
        else
            if(pestName=="spiders") {this->spraySolution="a mix of dish soap and water"; this->waterPeriod=4; }
            else
                if(pestName=="aphids") {this->spraySolution="a mix of liquid soap and water"; this->waterPeriod=5; }
                else
                    if(pestName=="beetles") {this->spraySolution="a mix of salt and water"; this->waterPeriod=4; }
                    else
                        if(pestName=="slugs") {this->spraySolution="a mix of ethanol and water"; this->waterPeriod=5; }
                        else
                            if(pestName=="leafhoppers") {this->spraySolution="a mix of peppermint oil, clove oil, rosemary oil and water"; this->waterPeriod=5; }
                            else
                                if(pestName=="ants") {this->spraySolution="a mix of lemon juice and water"; this->waterPeriod=4; }
                                else
                                    if(pestName=="mosquitoes") {this->spraySolution="a mix of citronella and water"; this->waterPeriod=5; }
                                    else
                                        if(pestName=="mites") {this->spraySolution="a mix of soap and oil"; this->waterPeriod=5; }
                                        else
                                            if(pestName=="leaf miners") {this->spraySolution="some neem oil"; this->waterPeriod=7; }
                                            else
                                                if(pestName=="moths") {this->spraySolution="some lavender oil"; this->waterPeriod=7; }
                                                else
                                                    if(pestName=="weevils") {this->spraySolution="some lavender oil"; this->waterPeriod=7; }

}

void pests::display()
{
    std::cout<<" If your plant was attacked by "<<this->name<<" you should put "<<this->spraySolution<<" in a bottle and spray it on your plant every "<<this->waterPeriod<<" days.";
}

pests::~pests()
{
    //dtor
}
