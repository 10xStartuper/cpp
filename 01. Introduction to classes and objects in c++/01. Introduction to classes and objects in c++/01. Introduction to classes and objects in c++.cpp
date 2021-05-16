#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel {
public:
    string Name;
    string Owner;
    int NumberOfSubscribers;
    list<string> PostedVideos;
};

int main()
{
    YoutubeChannel ytchannel;
    ytchannel.Name = "Code with Joseph";
    ytchannel.NumberOfSubscribers = 1020;
    ytchannel.Owner = "Mukhammadyusuf Abdurakhimov";
    ytchannel.PostedVideos = { "JavaScript in Action", "Node js in Practise", "You don;t know js" };
    
    cout << ytchannel.Name << endl;
    cout << ytchannel.NumberOfSubscribers << endl;
    cout << ytchannel.Owner << endl;
    cout << "Posted videos: " << endl;
    for (string posted : ytchannel.PostedVideos) {
        cout << posted << endl;
    }
    return  0;
}
