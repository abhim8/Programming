import java.awt.*; 
import java.awt.event.*; 
import java.applet.*;

/*
 * <applet code="Calculator" width=500 height=500></applet>
 * */

public class EXP12 extends Applet implements ActionListener{
	String msg=" "; 
	int n1,n2,result; 
	TextField t;
	Button b[]=new Button[10];
	Button add,sub,mul,div,clear,mod,EQ; 
	char OP;
	
	public void init(){
		Color k=new Color(10,89,90); 
		setBackground(k);
		t=new TextField(50);
		GridLayout gl=new GridLayout(6,3); 
		setLayout(gl);
		for(int i=0;i<10;i++){
			b[i]=new Button(""+i);
		}
		add=new Button("+"); sub=new Button("-"); mul=new Button("*"); div=new Button("/"); mod=new Button("%"); EQ=new Button("="); 
		clear=new Button("Clear");
		t.addActionListener(this); add(t);
		for(int i=0;i<10;i++){ add(b[i]); }
		add(add); add(sub); add(mul); add(div); add(mod); add(EQ); add(clear); 
		for(int i=0;i<10;i++){
			b[i].addActionListener(this);
		}
		add.addActionListener(this); sub.addActionListener(this); mul.addActionListener(this); div.addActionListener(this);
			mod.addActionListener(this); clear.addActionListener(this); EQ.addActionListener(this);
	}
	
	public void actionPerformed(ActionEvent ae){
		String str=ae.getActionCommand(); 
		char ch=str.charAt(0);
		
		if ( Character.isDigit(ch)) 
			t.setText(t.getText()+str); 
		else
			if(str.equals("+")){
				n1=Integer.parseInt(t.getText());
				OP='+';
				t.setText("");
			}
			else if(str.equals("-")){
				n1=Integer.parseInt(t.getText()); OP='-';
				t.setText("");
			} 
			else if(str.equals("*")){
				n1=Integer.parseInt(t.getText());
				OP='*';
				t.setText("");
			}
			else if(str.equals("/")){
				n1=Integer.parseInt(t.getText());
				OP='/';
				t.setText("");
			}
			else if(str.equals("%")){
				n1=Integer.parseInt(t.getText());
				OP='%';
				t.setText("");
			}
		
		if(str.equals("=")){
			n2=Integer.parseInt(t.getText());
			if(OP=='+')
				result=n1+n2; 
			else if(OP=='-')
				result=n1-n2; 
			else if(OP=='*')
				result=n1*n2; 
			else if(OP=='/')
				result=n1/n2; 
			else if(OP=='%')
				result=n1%n2;
			t.setText(""+result);
		}
		if(str.equals("Clear")){
			t.setText("");
		}
	}
}
