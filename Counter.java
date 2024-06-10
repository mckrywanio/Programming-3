public class Counter {
    public static void main(String[] args) {
        Thread thread1 = new Thread(new CountUp());
        Thread thread2 = new Thread(new CountDown());

        thread1.start();
        try {
            thread1.join();  // Ensure thread1 completes before starting thread2
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        thread2.start();
    }
}

class CountUp implements Runnable {
    @Override
    public void run() {
        for (int i = 1; i <= 20; i++) {
            System.out.println("Count Up: " + i);
            try {
                Thread.sleep(100); // Simulate work
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}

class CountDown implements Runnable {
    @Override
    public void run() {
        for (int i = 20; i >= 0; i--) {
            System.out.println("Count Down: " + i);
            try {
                Thread.sleep(100); // Simulate work
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}
