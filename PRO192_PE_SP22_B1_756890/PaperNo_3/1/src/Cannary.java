/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Admin
 */
public class Cannary {
    String place;
    int song;

    public Cannary() {
    }

    public Cannary(String place, int song) {
        this.place = place;
        this.song = song;
    }

    public String getPlace() {
        return place.substring(0, 3).toUpperCase()+place.substring(3);
    }

    public void setPlace(String place) {
        this.place = place;
    }

    public int getSong() {
        return song;
    }

    public void setSong(int song) {
        this.song = song;
    }

    @Override
    public String toString() {
        return  place + "\t" + song;
    }
    
    
    
}
