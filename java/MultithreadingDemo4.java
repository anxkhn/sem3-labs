class hello implements Runnable {
    public void run()
    // sync: public synchronized void run()
    {
        for (int i = 0; i < 5; i++) {
            System.out.println("hello");
            try {
                Thread.sleep(500);
            } catch (Exception e) {
                System.out.println(e);
            }
        }
    }
}

class hi implements Runnable {
    public void run() {
        for (int i = 0; i < 5; i++) {
            System.out.println("hi");
            try {
                Thread.sleep(500);
                // sync: Thread.sleep(0);
            } catch (Exception e) {
            }
            ;
        }
    }
}

class MultithreadingDemo4 {
    public static void main(String args[]) {
        hi obj1 = new hi();
        hello obj2 = new hello();
        Thread t1 = new Thread(obj1);
        Thread t2 = new Thread(obj2);

        t1.start();
        t2.start();
    }
}