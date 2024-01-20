import java.awt.*;
import java.awt.event.*;
class GUI3
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
        fobj.addWindowListener(new MarvellousListener());
        fobj.addWindowListener(new MarvellousListener());
    }

}
class MarvellousListner implements windowListener
{
         
public void windowDeactivated(WindowEvent obj){}
public void windowActivated(WindowEvent obj){}
public void windowDeconified(WindowEvent obj){}
public void windowIconified(WindowEvent obj){}
public void windowclosed(WindowEvent obj){}
public void windowClosing(WindowEvent obj)
{
    System.exit(0);
}

public void windowOpened(WindowEvent obj){}

}
