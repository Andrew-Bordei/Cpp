#include <iostream>
#include <list>

class YouTubeChannel
{
private:
    std::string Name;
    std::string OwnerName;
    int SubscriberCount;
    std::list<std::string> PublishedVideoTitles;
public:
    YouTubeChannel(std::string name, std::string ownerName)
    {
        Name = name;
        OwnerName = ownerName;
        SubscriberCount = 0;
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
};

class CookingChannel:public YouTubeChannel
{
public:
    CookingChannel(std::string name, std::string ownerName):YouTubeChannel(name, ownerName)
    {

    }
    void Practice()
    {
        std::cout << "practicing cooking, learning recipes" << std::endl;
    }
};
int main()
{

    CookingChannel cookchannel("Andrew's Steak House", "Andrew");
    cookchannel.PublishVideo("Medium Rare steak");
    cookchannel.PublishVideo("World's Best Honey");
    cookchannel.Subscribe();
    cookchannel.GetInfo();
    cookchannel.Practice();

    system("pause>0");
}