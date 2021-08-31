import java.awt.*;
import java.applet.*;
import java.awt.event.*;

/*<applet code="AdapterDemo" width=300 height=100></applet>*/

public class EXP14 extends Applet {
    String msg = "";
    int mousex = 0, mousey = 0;

    public EXP14() {
        addMouseListener(new MyMouseAdapter(this));
        addMouseMotionListener(new MyMouseMotionAdapter(this));
    }

    public void paint(Graphics g) {
        g.drawString(msg, mousex, mousey);
    }
}

class MyMouseAdapter extends MouseAdapter {
    EXP14 ad;

    public MyMouseAdapter(EXP14 ad) {
        this.ad = ad;
    }

    public void mouseExited(MouseEvent me) {
        ad.mousex = me.getX();
        ad.mousey = me.getY();
        ad.msg = "Mouse Exited at" + ad.mousex + "  " + ad.mousey;
        ad.repaint();
        ad.showStatus("Mouse Exited");
    }

    public void mouseEntered(MouseEvent me) {
        ad.mousex = me.getX();
        ad.mousey = me.getY();
        ad.msg = "Mouse entered at " + ad.mousex + "  " + ad.mousey;
        ad.repaint();
        ad.showStatus("Mouse Entered");
    }

    public void mouseReleased(MouseEvent me) {
        ad.mousex = me.getX();
        ad.mousey = me.getY();
        ad.msg = "Mouse Released at" + ad.mousex + "  " + ad.mousey;
        ad.repaint();
        ad.showStatus("Mouse Released");
    }

    public void mousePressed(MouseEvent me) {
        ad.mousex = me.getX();
        ad.mousey = me.getY();
        ad.msg = "Mouse Pressed at" + ad.mousex + "  " + ad.mousey;
        ad.repaint();
        ad.showStatus("Mouse Pressed");
    }

    public void mouseClicked(MouseEvent me) {
        ad.mousex = me.getX();
        ad.mousey = me.getY();
        ad.msg = "Mouse Clicked at" + ad.mousex + "  " + ad.mousey;
        ad.repaint();
        ad.showStatus("Mouse Clicked");
    }
}

class MyMouseMotionAdapter extends MouseMotionAdapter {
    EXP14 ad;

    public MyMouseMotionAdapter(EXP14 ad) {
        this.ad = ad;
    }

    public void mouseMoved(MouseEvent me) {
        ad.mousex = me.getX();
        ad.mousey = me.getY();
        ad.msg = "Mouse moved at" + ad.mousex + "  " + ad.mousey;
        ad.repaint();
        ad.showStatus("Mouse Moved");
    }

    public void mouseDragged(MouseEvent me) {
        ad.mousex = me.getX();
        ad.mousey = me.getY();
        ad.msg = "Mouse Dragged at" + ad.mousex + "  " + ad.mousey;
        ad.repaint();
        ad.showStatus("Mouse Dragged");
    }
}
