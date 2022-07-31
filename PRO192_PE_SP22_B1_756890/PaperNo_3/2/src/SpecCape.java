/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Admin
 */
public class SpecCape extends Cape {

    int type;

    public SpecCape() {
    }

    public SpecCape(int type) {
        this.type = type;
    }

    public SpecCape(String tailor, int color, int type) {
        super(tailor, color);
        this.type = type;
    }

    public int getType() {
        return type;
    }

    public void setType(int type) {
        this.type = type;
    }

    public String getTailor() {
        return tailor;
    }

    public void setTailor(String tailor) {
        this.tailor = tailor;
    }

    public int getColor() {
        return color;
    }

    public void setColor(int color) {
        this.color = color;
    }

    @Override
    public String toString() {
        return tailor + ", " + color + ", " + type;
    }

    public void setData() {
        tailor= tailor.substring(0, tailor.length()-2)+"XYZ";
    }
    public int getValue()
    {
        char x=tailor.charAt(0);
        if (Character.isDigit(x)==true)
        {
            return color+11;
        }
        else return color +4;
    }
}
