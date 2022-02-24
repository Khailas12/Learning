// Applet which receives fontname and fontsize as parameters and displays a string using these parameters.

import java.awt.*;
import java.applet.*;


class font extends Applet {
    Font f1, f2, f3;

    public void init() {
        f1 = new Font("Arial", Font.BOLD, 23);
        f2 = new Font("Forte", Font.PLAIN, 18);
        f3 = new Font("Elephant", Font.ITALIC, 23);
    }

    public void paint(Graphics g) {
        g.drawString("Java Programming", 45, 45);
        g.setFont(f1);

        g.drawString("Ada", 50, 80);
        g.setFont(f2);

        g.drawString("Artificial Intelligence", 50, 110);
        g.setFont(f3);

        g.drawString("DCN", 50, 140);
    }
}

/*
 * <applet code="font.class" height=500 width=500>
 * </applet>
 */