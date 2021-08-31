import java.util.Scanner;
import java.io.*;

class Exp6 {

	public static void main(String[] args) {

		String path = null;
		Scanner read = new Scanner(System.in);
		System.out.print("Enter the root directory name: ");
		path = read.next() + ":\\";
		File f_ref = new File(path);
		if (!f_ref.exists()) {
			printLine();
			System.out.println("Root directory does not exists!");
			printLine();
		} else {
			String ch = "y";
			while (ch.equalsIgnoreCase("y")) {
				printFiles(path);
		System.out.print("Do you want to open any sub-directory (Y/N):  ");
				ch = read.next().toLowerCase();
				if (ch.equalsIgnoreCase("y")) {
			System.out.print("Enter the sub-directory name: ");
					path = path + "\\\\" + read.next();
					File f_ref_2 = new File(path);
					if (!f_ref_2.exists()) {
						printLine();
			System.out.println("The sub-directory does not exists!");
						printLine();
				int lastIndex = path.lastIndexOf("\\");
				path = path.substring(0, lastIndex);
					}
				}
			}
		}
        read.close();
		System.out.println("***** Program Closed *****");
	}

	public static void printFiles(String path) {
		System.out.println("Current Location: " + path);
		File f_ref = new File(path);
		File[] filesList = f_ref.listFiles();
		for (File file : filesList) {
			if (file.isFile())
				System.out.println("- " + file.getName());
			else
				System.out.println("> " + file.getName());
		}
	}

	public static void printLine() {
		System.out.println("----------------------------------------");
	}
}
