import java.awt.*;
class GUI2
{
    public static void main(String Arg[])
    {
       MarvellousFrame mobj = new MarvellousFrame("PPA49"); 
    }
}


class MarvellousFrame
{
    public MarvellousFrame(String title)
    {
        Frame fobj = new Frame(title);
        fobj.setSize(300,600); //(w,h)
        fobj.setVisible(true); 
    }

}
