/*  Write a java program that loads names and phone numbers from the text file where
    data is organized as one line per record and each field in record are separated by a
    tab(\t).It takes a name or phone number as input and prints corresponding other value
    from hash table(hint: use Hash Table)   */

import java.util.*;
import java.io.*;
public class Exp10{
    public static void main(String[] args){
        try{
            FileInputStream fs=new FileInputStream("C:\\Users\\movva\\Documents\\Programs\\Java\\Lab\\hashTable.txt");
            Scanner sc = new Scanner(fs).useDelimiter(" ");
            Hashtable<String,String> ht = new Hashtable<String,String>();
            String[] arrayList;
            String a;
            System.out.println("Welcome to CMR");
            System.out.println("HASH TABLE IS");
            System.out.println("---------------------");
            System.out.println("KEY   :   VALUE");
            while(sc.hasNext()){
                a = sc.nextLine();
                arrayList=a.split(" ");
                ht.put(arrayList[0],arrayList[1]);
                System.out.println(arrayList[0]+"   :   "+arrayList[1]);
            }
        
            System.out.println("Welcome to CMR");
            System.out.println("---  MENU               ---");
            System.out.println("---  1.search by name   ---");
            System.out.println("---  2.search by mobile ---");
            System.out.println("---  3.Exit             ---");
            String opt="";
            String name,mobile;
            Scanner s = new Scanner(System.in);
        
            while(opt!="3"){
                System.out.println("Enter your option 1,2,3");
                opt = s.next();
                switch(opt){
                    case "1":{
                        System.out.println("Enter name");
                        name=s.next();
                        if(ht.containsValue(name)){
                            for(Map.Entry<String,String> e: ht.entrySet()){
                                if(name.equals(e.getValue())){
                                    System.out.println("Mobile is "+e.getKey());
                                    break;
                                }
                            }
                        }else{
                            System.out.println("Not Found!!");
                        }
                    }break;
                    case "2":{
                        System.out.println("Enter mobile");
                        mobile=s.next();
                        if(ht.containsKey(mobile)){
                            for(Map.Entry<String,String> e: ht.entrySet()){
                                if(mobile.equals(e.getKey())){
                                    System.out.println("Name is "+e.getValue());
                                    break;
                                }
                            }
                        }else{
                            System.out.println("Not Found!!");
                        }
                    }break;
                    case "3":{
                        opt="3";
                        System.out.println("Menu Successfully exited");
                    }break;
                    default: System.out.println("choose option between 1 and 3");
                    break;
                }
            }
            sc.close();
            s.close();
        }
        catch(Exception ex){
            System.out.println(ex.getMessage());
        }
        
    }
}