#include <iostream>
#include <list>

class YouTubeChannel
{
private:
    std::string Name;
    int SubscriberCount;
    std::list<std::string> PublishedVideoTitles;
protected: 
    std::string OwnerName;
    int ContentQuality;
public:
    YouTubeChannel(std::string name, std::string ownerName)
    {
        Name = name;
        OwnerName = ownerName;
        SubscriberCount = 0;
        ContentQuality = 0;
    }

    void GetInfo()
    {
        std::cout << "Name: " << Name << std::endl;
        std::cout << "OwnerName: " << OwnerName << std::endl;
        std::cout << "SubscriberCount: " << SubscriberCount << std::endl;
        std::cout << "Videos: " << SubscriberCount << std::endl;

        for (std::string vidTitles : PublishedVideoTitles)
        {
            std::cout << vidTitles << std::endl;
        }
    }

    void Subscribe()
    {
        SubscriberCount++;
    }
    void Unsubscribe()
    {
        if (SubscriberCount > 0)
            SubscriberCount--;
    }
    void PublishVideo(std::string title)
    {
        PublishedVideoTitles.push_back(title);
    }
    void CheckAnalytics()
    {
        if (ContentQuality < 5)
            std::cout << Name << " has bad quality content!!" << std::endl;
        else 
            std::cout << Name << " has great quality content!!" << std::endl;

    }
};

class CookingChannel :public YouTubeChannel
{
public:
    CookingChannel(std::string name, std::string ownerName) :YouTubeChannel(name, ownerName)
    {

    }
    void Practice()
    {
        std::cout << "practicing cooking, learning recipes" << std::endl;
        ContentQuality++;
    }
};
class MMAChannel :public YouTubeChannel
{
public:
    MMAChannel(std::string name, std::string ownerName) :YouTubeChannel(name, ownerName)
    {

    }
    void Practice()
    {
        std::cout << "practicing Muay Thai, learning wrestling" << std::endl;
        ContentQuality++;
    }
};
int main()
{

    CookingChannel cookchannel("Andrew's Steak House", "Andrew");
    MMAChannel mmachannel("AndrewMMA", "Andrew");

    cookchannel.Practice();
    mmachannel.Practice();
    mmachannel.Practice();
    mmachannel.Practice();
    mmachannel.Practice();
    mmachannel.Practice();
    mmachannel.Practice();

    YouTubeChannel* p1 = &cookchannel;
    YouTubeChannel* p2 = &mmachannel;

    p1->CheckAnalytics(); 
    p2->CheckAnalytics();


    system("pause>0");
}