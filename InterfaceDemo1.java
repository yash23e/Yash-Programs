interface Circle
{
    float PP = 3.14;
    public float Area (float Radius);
    public float Circumference ( float Radius);
}

class PPA implements Circle
{
    public float Area(float Radius)
    {
        return PI *Radius*Radius
    }
    public float Circumference(float Radius)
    {
        return 2 *PI*Radius;
    }
}

class InterfaceDemo
{
    public static void main(String arg[])
    {
        PPA pobj = new PPA();
        float fRet = 0.0;
        fRet = pobj.Area(10.7f);
        System.out.println("Area is :"+)
       
    }
}