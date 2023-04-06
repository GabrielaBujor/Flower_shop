#include "flower.h"
#include <iostream>
#include <string>

flower::flower(std::string flowerName)
{
    //ctor
    this->name=flowerName;
    if(flowerName=="Tulip") {this->family="Bulb"; this->waterPeriod=5; this->blooming="March, April and May"; this->colors="pink, red, yellow, white"; this->pests="snails, caterpillars and spiders."; this->fertilizer="blood meal, greensand and bone meal."; }
    else
        if(flowerName=="Rose") {this->family="Rosaceae"; this->waterPeriod=7; this->blooming="May and June"; this->colors="red, white, yellow, pink"; this->pests="aphids and beetles."; this->fertilizer="nitrogen, phosphorus and potassium."; }
        else
            if(flowerName=="Sunflower") {this->family="Asteraceae"; this->waterPeriod=7; this->blooming="June, July and August"; this->colors="yellow, orange"; this->pests="snails and slugs."; this->fertilizer="nitrogen, phosphorus and potassium."; }
            else
                if(flowerName=="Magnolia") {this->family="Magnoliaceae"; this->waterPeriod=7; this->blooming="May, June, July and August"; this->colors="pink, purple, yellow"; this->pests="aphids and beetles."; this->fertilizer="nitrogen, phosphorus and potassium."; }
                else
                    if(flowerName=="Lily of the valley") {this->family="Asparagaceae"; this->waterPeriod=7; this->blooming="March and April"; this->colors="white, light pink"; this->pests="leafhoppers and caterpillars."; this->fertilizer="organic fish fertilizer."; }
                    else
                        if(flowerName=="Lavender") {this->family="Lamiaceae"; this->waterPeriod=5; this->blooming="April, May, June, July and August"; this->colors="violet, blue"; this->pests="aphids, ants and mosquitoes."; this->fertilizer="nitrogen."; }
                        else
                            if(flowerName=="Hibiscus") {this->family="Malvaceae"; this->waterPeriod=2; this->blooming="July and August"; this->colors="red, yellow, pink"; this->pests="aphids, mites and leaf miners."; this->fertilizer="nitrogen, phosphorus and potassium."; }
                            else
                                if(flowerName=="Chrysanthemum") {this->family="Asteraceae"; this->waterPeriod=2; this->blooming="August, September and October"; this->colors="white, pink, orange"; this->pests="beetles, moths and weevils."; this->fertilizer="nitrogen, phosphorus and potassium."; }


}
void flower::display()
{
    std::cout<<" "<<this->name<<" is from the "<<this->family<<" family and has the colors: "<<this->colors<<". It needs to be watered every "<<this->waterPeriod<<" days and blooms in "<<this->blooming<<". Its pests include: "<<this->pests<<" You should also fertilize your plant with the following substance(s): "<<this->fertilizer;
}

flower::~flower()
{
    //dtor
}
