public class AudioPlayer implements MediaPlayer{
    @Override
    public void play(String audioType, String fileName) {
        if (audioType.equals("mp3")) {
            System.out.println("Playing Mp3 file: " + fileName);
        }
        else if (audioType.equals("mp4") || audioType.equals("vlc")) {
            MediaAdapter adapter = new MediaAdapter(audioType);
            adapter.play(audioType, fileName);
        }
        else {
            System.out.println("Invalid media type");
        }
    }
}
