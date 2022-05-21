#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel
{
private:
    string Name;
    int SubscribersCounts;
    list<string> PublishedVideoTitles;

protected:
    string OwnerName;
    int ContentQuality;

public:
    YouTubeChannel(string name, string ownerName)
    {
        Name = name;
        OwnerName = ownerName;
        SubscribersCounts = 0;
        ContentQuality = 0;
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
    }
    void Subscribe()
    {
        SubscribersCounts++;
    }
    void Unsubscribe()
    {
        if (SubscribersCounts > 0)
            SubscribersCounts--;
    }
    void PublishVideo(string title)
    {
        PublishedVideoTitles.push_back(title);
    }
    void CheckAnalytics()
    {
        if (ContentQuality < 5)
            cout << Name << " has bad quality content" << endl;
        else
            cout << Name << " has great content." << endl;
    }
};

class CookingYouTubeChannel : public YouTubeChannel
{
public:
    CookingYouTubeChannel(string name, string ownerName) : YouTubeChannel(name, ownerName)
    {
    }
    void Practice()
    {
        cout << OwnerName << " pacticing cooking, learning now recipes, experimenting with spices..." << endl;
        ContentQuality++;
    }
};

class SingersYouTubeChannel : public YouTubeChannel
{
public:
    SingersYouTubeChannel(string name, string ownerName) : YouTubeChannel(name, ownerName)
    {
    }
    void Practice()
    {
        cout << OwnerName << " is taking singing classes, learning new songs, leearning how to dance..." << endl;
        ContentQuality++;
    }
};

int main()
{
    CookingYouTubeChannel cookingYtChannel("Roger Cook's", "Roger");
    SingersYouTubeChannel singersYtChannel("TheophileSings", "Theophile");

    cookingYtChannel.Practice();
    cookingYtChannel.Practice();
    cookingYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();

    YouTubeChannel *yt1 = &cookingYtChannel;
    YouTubeChannel *yt2 = &singersYtChannel;

    yt1->CheckAnalytics();
    yt2->CheckAnalytics();

    system("pause>0");
}