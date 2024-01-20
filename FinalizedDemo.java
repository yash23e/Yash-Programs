class FinalizeDemo
{
    public static void main(String arg[])
    {
      
      Employee eobj = new Employee("Amit",7800,28,"Karve Road Pune");
      eobj.Display();
      String str="Marvellous";
     System.out.println(eobj.getClass());
     System.out.println(str.getClass());
    }
}
class Employee
{
    public String Name;
    public int Salary;
    public String address;
    public int Age;
    Employee(String str,int amount,int A,String addr)
    {
        this.Name=str;
        this.Salary=amount;
        this.Age=A;
        this.address=addr;

    }
    protected  void finalize()
    {
      
        System.out.println("Inside Finalize method...");
    }
    void Display()
    {
        System.out.println("Employee name:"+this.Name);
       System.out.println("Employee Age:"+this.Age);

        System.out.println("Employee Salary:"+this.Salary);
        System.out.println("Employee address:"+this.address);

    }
}

