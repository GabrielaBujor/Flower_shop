#include <iostream>
#include <flower.h>
#include <pests.h>
#include <string>

using namespace std;

void choice(int n)
{
   flower *f;
   switch(n)
   {
       case 1: f = new flower("Tulip"); break;
       case 2: f = new flower("Magnolia"); break;
       case 3: f = new flower("Lily of the valley"); break;
       case 4: f = new flower("Rose"); break;
       case 5: f = new flower("Lavender"); break;
       case 6: f = new flower("Hibiscus"); break;
       case 7: f = new flower("Chrysanthemum"); break;
       case 8: f = new flower("Sunflower"); break;
       default: exit;
   }
   f->display();
   delete f;
}
void choice2(int m)
{
    pests *p;
    switch(m)
   {
       case 1: p = new pests("snails"); break;
       case 2: p = new pests("caterpillars"); break;
       case 3: p = new pests("spiders"); break;
       case 4: p = new pests("aphids"); break;
       case 5: p = new pests("beetles"); break;
       case 6: p = new pests("slugs"); break;
       case 7: p = new pests("leafhoppers"); break;
       case 8: p = new pests("ants"); break;
       case 9: p = new pests("mosquitoes"); break;
       case 10: p = new pests("mites"); break;
       case 11: p = new pests("leaf miners"); break;
       case 12: p = new pests("moths"); break;
       case 13: p = new pests("weevils"); break;
       default: exit;
   }
   p->display();
   delete p;
}

int main()
{
    int n, m;
    cout<<endl<< "                          ---The Garden App---"<<endl<<endl;
    cout<<" Here you can find information on:"<<endl<<" Tulips(1), Magnolia(2), Lily of the valley(3), Rose(4), Lavender(5), Hibiscus(6), Chrysanthemum(7), SunFlower(8)"<<endl<<endl;
    cout<<" Which flower are you interested in? (choose the index)"<<endl<<"  ";
    cin>>n;
    choice(n);
    cout<<endl<<endl;
    cout<<" Is your flower attacked by any pests? (choose the index), if not, press 0."<<endl;
    cout<<" Pests:"<<endl<<" snails(1), caterpillars(2), spiders(3), aphids(4), beetles(5), slugs(6), leafhoppers(7), ants(8), mosquitoes(9), mites(10), leaf miners(11), moths(12), weevils(13)"<<endl<<endl;
    cin>>m;
    choice2(m);
    cout<<endl<<endl;
    cout<<" Do you want to know about any other flower? If not, press 0."<<endl;
    cin>>n;
    choice(n);
    cout<<endl<<endl;
    return 0;
}
