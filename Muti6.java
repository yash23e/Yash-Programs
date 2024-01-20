class Muti6
{
    public static void main(String arg[]) throws Exception
    {
        System.out.println("Current thread is :"+Thread.currentThread().getName());
        Demo obj1 = new Demo(); //New state
        Demo obj2 = new Demo(); //New state

        obj1.setName("First_Thread");
        obj2.setName("Second_Thread");



        obj1.start();
        obj2.start();  //Runnable state
                       //Runnable state
        obj1.join();
        System.out.println("Priority of obj1 :"+obj.getpriority());
                System.out.println("Priority of obj2 :"+obj.getpriority());


obj.setPriority(8);
obj.setPriority(8);
System.out.println("Priority of obj1 :"+obj1.getpriority());
System.out.println("Priority of obj2 :"+obj2.getpriority());


        
    }
}
class Demo extends Thread
{
    public void run ()
    {
        String name = Thread.currentThread().getName();
        System.out.println("Current thread is :"+Thread.currentThread().getName());
        for(int i =1;i<1000;i++)
        {
            try 
            {
                System.out.println("Value of i is :"+i);
                Thread.sleep(1000);

            }
            catch(Exception obj)
            {}
        }
        System.out.println("End of thread");
    }
}



