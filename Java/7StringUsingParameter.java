import java.awt.*;
import java.applet.*;


class font extends Applet {
    Font f1, f2, f3;

    public void init() {
        f1 = new Font("Arial", Font.BOLD, 18);
        f2 = new Font("Forte", Font.PLAIN, 24);
        f3 = new Font("Elephant", Font.ITALIC, 29);
    }

    public void paint(Graphics g) {
        g.drawString("Java Programming", 50, 50);
        g.setFont(f1);

        g.drawString("Ada", 45, 35);
        g.setFont(f2);

        g.drawString("AI", 34, 43);
        g.setFont(f3);

        g.drawString("DCN", 35, 45);
    }
}