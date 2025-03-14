#include<bits/stdc++.h>
using namespace std ;

class MediaPlayer
{
public :
    virtual void play(string audioType, string fileName ) = 0 ;
};
class AdvancedMediaPlayer
{
public :
    virtual void playMP4 (string fileName) = 0;
    virtual void playVLC (string fileName) = 0;

};

class MP4Player : public AdvancedMediaPlayer
{.
    void playMP4 (string fileName) override
    {
        cout << "Playing MP4 file: " << fileName <<endl;
    }
    void playVLC(string fileName) override
    {

    }
};
class VLCPlayer : public AdvancedMediaPlayer
{
    void playMP4 (string fileName) override
    {
    }
    void playVLC(string fileName) override
    {
        cout << "Playing VLC file: " << fileName <<endl;

    }
};

class MediaAdapter : public MediaPlayer
{
private :
    AdvancedMediaPlayer* advancedPlayer ;
public :
    MediaAdapter (string audioType)
    {
        if(audioType == "mp4")
        {
            advancedPlayer = new MP4Player() ;
        }
        else if (audioType== "vlc")
        {
            advancedPlayer = new VLCPlayer() ;
        }
        else
        {
            advancedPlayer = nullptr;
        }
    }
    void play(string audioType, string fileName) override
    {
        if (audioType == "mp4" && advancedPlayer)
        {
            advancedPlayer->playMP4(fileName);
        }
        else if (audioType == "vlc" && advancedPlayer)
        {
            advancedPlayer->playVLC(fileName);
        }
    }

};

class AudioPlayer : public MediaPlayer
{
public:
    void play(string audioType,string fileName) override
    {
        if (audioType == "mp3")
        {
            cout << "Playing MP3 file: " << fileName << endl;
        }
        else if (audioType == "mp4" || audioType == "vlc")
        {
            MediaAdapter adapter(audioType);
            adapter.play(audioType, fileName);
        }
        else
        {
            cout << "Invalid media type: " << audioType << endl;
        }
    }
};
int main()
{

 AudioPlayer player;

    player.play("mp3", "song.mp3");
    player.play("mp4", "video.mp4");
    player.play("vlc", "movie.vlc");
    player.play("avi", "unsupported.avi");

}
