// Producer-Consumer using Inter Thread Communication
class ItemQueue {
	int item;
	boolean valueSet = false;
	synchronized int getItem(){
		while (!valueSet){
			try { wait(); }
			catch (InterruptedException e) { System.out.println("InterruptedException caught"); }
		}
		System.out.println("Consummed:" + item);
		valueSet = false;
		try { Thread.sleep(1000); } 
		catch (InterruptedException e) { System.out.println("InterruptedException caught"); }
		notify();
		return item;
	}

	synchronized void putItem(int item) {
		while (valueSet){
			try { wait(); } 
			catch (InterruptedException e) { System.out.println("InterruptedException caught"); }
		}
		this.item = item;
		valueSet = true;
		System.out.println("Produced: " + item);
		try { Thread.sleep(1000); } 
		catch (InterruptedException e) { System.out.println("InterruptedException caught"); }
		notify();
	}
}

class Producer implements Runnable{
	ItemQueue itemQueue;
	Producer(ItemQueue itemQueue){
		this.itemQueue = itemQueue;
		new Thread(this, "Producer").start();
	}
	public void run() {
		int i = 0;
		while(true) {
			itemQueue.putItem(i++);
		}
	}
}

class Consumer implements Runnable{	
	ItemQueue itemQueue;
	Consumer(ItemQueue itemQueue){
		this.itemQueue = itemQueue;
		new Thread(this, "Consumer").start();
	}
	public void run() {
		while(true) {
			itemQueue.getItem();
		}
	}
}

class EXP9{
	public static void main(String args[]) {
		ItemQueue itemQueue = new ItemQueue();
		new Producer(itemQueue);
		new Consumer(itemQueue);
	}
}