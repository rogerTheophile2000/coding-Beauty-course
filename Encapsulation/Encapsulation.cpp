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

public:
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
};

class CookingYouTubeChannel : public YouTubeChannel
{
public:
    CookingYouTubeChannel(string name, string ownerName) : YouTubeChannel(name, ownerName)
    {
    }
    void Practice()
    {
        cout << "Pacticing cooking, learning now recipes, experimenting with spices..." << endl;
    }
};

int main()
{
    CookingYouTubeChannel cookingYtChannel("Roger Cook's", "Roger");
    CookingYouTubeChannel cookingYtChannel2("John's Cook", "John");
    cookingYtChannel.PublishVideo("Chocolate cake");
    cookingYtChannel.PublishVideo("Apple pie");
    cookingYtChannel.Subscribe();
    cookingYtChannel.Subscribe();
    cookingYtChannel.getInfo();
    cookingYtChannel.Practice();

    system("pause>0");
}