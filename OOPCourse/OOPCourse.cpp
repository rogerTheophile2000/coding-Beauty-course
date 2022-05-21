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
};

int main()
{
    YouTubeChannel ytChannel;
    ytChannel.Name = "RogerChannel";
    ytChannel.OwnerName = "Roger";
    ytChannel.SubscribersCounts = 17000;
    ytChannel.PublishedVideoTitles = {
        "C++ for beginners Video 1",
        "HTML & CSS Video 1",
        "OOP IN C++ Video 1"};

    cout << "Name : " << ytChannel.Name << endl;
    cout << "Name OwnerName : " << ytChannel.OwnerName << endl;
    cout << "SubscribersCounts : " << ytChannel.SubscribersCounts << endl;
    cout << "Videos : " << endl;
    for (string videoTitle : ytChannel.PublishedVideoTitles)
    {
        cout << videoTitle << endl;
    }

    cout << endl
         << endl;

    YouTubeChannel ytChanne2;
    ytChanne2.Name = "OperaNews";
    ytChanne2.OwnerName = "Theophile";
    ytChanne2.SubscribersCounts = 1700000;
    ytChanne2.PublishedVideoTitles = {
        "G. F. Handel Messiah HWV 56",
        "G. F.Handel Belshazzar Oratorio HWV 61",
        "Carl Orff Carmina Burana",
        "Beethoven Symphony No 9"};

    cout << "Name : " << ytChanne2.Name << endl;
    cout << "Name OwnerName : " << ytChanne2.OwnerName << endl;
    cout << "SubscribersCounts : " << ytChanne2.SubscribersCounts << endl;
    cout << "Videos : " << endl;
    for (string videoTitle : ytChanne2.PublishedVideoTitles)
    {
        cout << videoTitle << endl;
    }

    system("pause>0");
}