public class ThreadEg implements Runnable  {

    @Override
    public void run() {
        int sum=0;
        
        try{
        for(int i=1;i<=10;i++){
            sum+=i;
            System.out.println("This is the iteration number "+i);
            Thread.sleep(2000);
        }
    }
    catch(InterruptedException e){
        System.out.println(e);
    }
    
        System.out.println("The sum of first 10 numbers is: "+sum);
        
    }
    public static void main(String []args){
        ThreadEg th1 =new ThreadEg();
        Thread t = new Thread(th1);
        t.start();
    }
}