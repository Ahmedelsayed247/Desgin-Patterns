public class MediaAdapter implements MediaPlayer{
    AdvancedMediaPlayer advancedMediaPlayer ;
    MediaAdapter(String audioType) {
        if(audioType.equals("mp4")){
            advancedMediaPlayer = new MP4Player();
        }
        else if (audioType.equals("vlc")){
          advancedMediaPlayer = new VLCPlayer() ;
        }
        else {
            advancedMediaPlayer = null ;
        }

    }
    @Override
    public void play(String audioType, String fileName) {
        if (audioType.equals("mp4")) {
            advancedMediaPlayer.playMP4(fileName);
        } else if (audioType.equals("vlc") ) {
            advancedMediaPlayer.playVLC(fileName);
        }
    }
}
