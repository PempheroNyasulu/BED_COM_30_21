// main function for the program
int main () {
    Box Box1;  // Declare Box1 of type Box
    Box Box2;  // Declare Box2 of type Box
    Box Box3;  // Declare Box3 of type Box

    double volume = 0.0;    //store the volume of the box here

    // box 1 specification
    Box1.SetLength(6.0);
    Box1.SetLength(7.0);
    Box1.SetLength(5.0);

    // box 2 specification
    Box2.SetLength(12.0);
    Box2.SetBreadth(13.0);
    Box2.SetHeight(10.0);

      // volume of box 1
      volume = Box1.GetVolume();
      cout << "Volume of the Box1 " << volume << endl;


      // volume of box 2
      volume = Box2.GetVolume();
      cout << "Volume of the Box2 " << volume << endl;

      // add two objects as follows:
      Box3 = Box1 + Box2;

      // volume of box3
      volume = Box3.GetVolume();
      cout << "Volume of Box3 : " << volume << endl;

      return 0;

}