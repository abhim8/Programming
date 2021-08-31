import java.awt.*; 
import java.awt.event.*;
import java.applet.Applet;

// <applet code="Fact.class" height=300 width=300></applet>

public class Exp5B extends Applet implements ActionListener {
	Label inputLable,outputLable; 
	TextField inputTextField,outputTextField; 
	Button btn;
	public void init(){
		inputLable=new Label("Enter any integer value: "); 
		inputTextField=new TextField(5); 
		btn=new Button("Compute"); 
		btn.addActionListener(this);
		outputLable=new Label("Factorial of given integer number is ");
		outputTextField=new TextField(10); 
		add(inputLable);
		add(inputTextField);
		add(btn);  
		add(outputLable);
		add(outputTextField);
	}
	public void actionPerformed(ActionEvent e){
		if(e.getSource()==btn){
			int fact=fact(Integer.parseInt(inputTextField.getText())); 
			outputTextField.setText(String.valueOf(fact));
		}
	}
	int fact(int f){
		if(f==0) 
			return 1; 
		else
			return f*fact(f-1);
	}
}
