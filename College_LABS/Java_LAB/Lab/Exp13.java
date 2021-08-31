import java.awt.*;
import java.awt.event.*;
import java.applet.*;
import javax.swing.*;
/*<applet code="Traffic" height=300 width=300></applet>*/
public class Exp13 extends JApplet implements ActionListener{
    JTextField t1;
    JRadioButton b1,b2,b3;
    
    public void init(){
        Container c = getContentPane();
        c.setLayout(new FlowLayout());
        t1=new JTextField(25);
        b1=new JRadioButton("RED");
        b2=new JRadioButton("YELLOW");
        b3=new JRadioButton("GREEN");
        add(t1); add(b1); add(b2); add(b3);
        b1.addActionListener(this); b2.addActionListener(this); b3.addActionListener(this); 
        ButtonGroup bg=new ButtonGroup();
        bg.add(b1); bg.add(b2); bg.add(b3);        
    }
    public void actionPerformed(ActionEvent ae){
        if(ae.getActionCommand()=="RED"){
            t1.setText("STOP");
            t1.setBackground(Color.RED);
        }
        if(ae.getActionCommand()=="YELLOW"){
            t1.setText("READY");
            t1.setBackground(Color.YELLOW);
        }
        if(ae.getActionCommand()=="GREEN"){
            t1.setText("GO");
            t1.setBackground(Color.GREEN);
        }
    }
}
