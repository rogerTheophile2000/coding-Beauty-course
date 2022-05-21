#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel
{
public:
    string Name;
    string OwnerName;
    int SubscribersCounts;
    list<string> PublishedVideoTitles;

    YouTubeChannel(string name, string ownerName)
    {
        Name = name;
        OwnerName = ownerName;
        SubscribersCounts = 0;
    }
    void getInfo()
    {
        cout << "Name : " << Name << endl;
        cout << "Name OwnerName : " << OwnerName << endl;
        cout << "SubscribersCounts : " << SubscribersCounts << endl;
        cout << "Videos : " << endl;
        for (string videoTitle : PublishedVideoTitles)
        {
            cout << videoTitle << endl;
        }

        cout << endl
             << endl;
    }
};

int main()
{
    YouTubeChannel ytChannel("RogerChannel", "Roger");
    ytChannel.PublishedVideoTitles.push_back("C++ for Beginners");
    ytChannel.PublishedVideoTitles.push_back("HTML & CSS for Beginners");
    ytChannel.PublishedVideoTitles.push_back("C++ OOP for Beginners");

    YouTubeChannel ytChanne2("OperaNews", "theophile");
    ytChanne2.PublishedVideoTitles.push_back("G. F. Handel Messiah HWV 56");
    ytChanne2.PublishedVideoTitles.push_back("G. F.Handel Belshazzar Oratorio HWV 61");
    ytChanne2.PublishedVideoTitles.push_back("Carl Orff Carmina Burana");
    ytChanne2.PublishedVideoTitles.push_back("Beethoven Symphony No 9");

    ytChannel.getInfo();
    ytChanne2.getInfo();

    system("pause>0");
}