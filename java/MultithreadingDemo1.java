class MultithreadingDemo1 implements Runnable {
    public void run() {
        System.out.println("Thread is in running state.");
    }

    public static void main(String[] args) {
        MultithreadingDemo1 obj = new MultithreadingDemo1();
        Thread t1 = new Thread(obj);
        t1.start();
    }
}