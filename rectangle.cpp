/*
Rectangle
Ashley Saliasi
03/08/2022
*/
#include <iostream>
using namespace std;

// rectangle has a vertical height and horizontal width
// The class below is a rectangle. It has two private
// data members: height and width.
// TODO: Complete the class declaration and definition.
class rectangle {
        public:
  // TODO: declare a default constructor 
  // sets height and width to the unit rectangle which is a square 1x1 size.

        rectangle (int h=1, int w=1); //constructor with 2 parameters

  // TODO: declare member function add
  // add the given addHeight to height and addWidth to width
  // @param int addHeight, int addWidth
  // @returns void

        void add (int addHeight, int addWidth);

  // TODO: delcare member function void set
  // set the height to new_height and width to new_width
  // @param int new_height, int new_width
  // @returns void

        void set (int new_height, int new_width);

  // TODO: declare member function draw
  // uses height as the vertical dimension (outer loop) and width as the horizontal
  // dimension (inner loop) to draw the rectangle with '#' characters.

        void draw ();

  // TODO: define accessor for width

        int getWidth () const;

  // TODO: define accessor for height

        int getHeight () const;

  // TODO: declare a function that tells if a
  // rectangle is a square

        bool isSquare ();

  private:
    int height;
    int width;
};

  // TODO: implement a default constructor 
  // sets height and width to the unit rectangle which is
  // a square 1x1 size.


rectangle:: rectangle (int h, int w)
{
        height=h;
        width=w;
}
// TODO: Implement add member function
// @param int addHeight, int addWidth
// to addHeight to height and add addWidth to width
void rectangle::add(int addHeight, int addWidth)
{

        height+=addHeight;
        width+=addWidth;
}

// TODO: implement member function void set that assigns
// new_height to height and new_width to width
// @param int new_height, int new_width
void rectangle::set(int new_height, int new_width)
{

        height=new_height;
        width=new_width;
}

// TODO: declare member function void draw that uses
// uses the height in an outer loop and the width in an
// inner loop to draw the rectangle with '#' characters.

void rectangle::draw()
{

        for (int i=0; i<height;i++)
        {
                for (int j=0; j<width; j++)
                {
                        cout<<'#';
                }
                cout<<endl;
        }

}

// TODO: Don't forget to define getWidth and getHeight

int rectangle:: getWidth () const
{
        return width;
}

int rectangle:: getHeight () const
{
        return height;
}


bool rectangle:: isSquare () //checks to see if rectangle is square
{
        if (height==width)
        {
                return true;
        }
        else
                return false;
}

int main()
{
  // Declare 2 rectangles
  rectangle r1, r2;

  // Draw the unit rectangle
  cout << "unit rectangle" << endl;
  r1.draw();

  // Set, print dimensions and draw
  r1.set(4, 3);
  cout << "r1 is " << r1.getHeight() << " x " << r1.getWidth() << endl;
  r1.draw();

  // Assign, increment, print dimensions and draw
  r2 = r1;
  r2.add(3, 4);
  cout << "r2 is " << r2.getHeight() << " x " << r2.getWidth() << endl;
  r2.draw();

  if (r2.isSquare())
    cout << "r2 is a square" << endl;
  else
    cout << "r2 is not a square" << endl;
  return 0;
}

