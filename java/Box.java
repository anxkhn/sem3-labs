//Program to find out the volume of a box by user given input.
import java.util.*;;

class Box {
    int width;
    int height;
    int depth;
}

// This class declares an object of type Box.
class BoxDemo {
    public static void main(String args[]) {
        Box mybox = new Box();
        double vol;
        Scanner sc = new Scanner(System.in);
        System.out.print("Length: ");
        mybox.width = sc.nextInt();
        System.out.print("Breadth: ");
        mybox.depth = sc.nextInt();
        System.out.print("Height: ");
        mybox.height = sc.nextInt();
        vol = mybox.width * mybox.height * mybox.depth;
        System.out.println("Volume is " + vol);
    }
}
