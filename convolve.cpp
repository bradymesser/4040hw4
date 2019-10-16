#include "Helper.h"

int main(int argc, char * argv[]) {
  Image img = Image();
  filt = Filter();
  if (argc < 3 || argc > 4)
    cout << "Invalid usage. Valid usages are the following:\n./convolve filter.filt in.img\n./convolve filter.filt in.img out.img\n";
  else {
    img = Image(argv[2]);
    filt = Filter(argv[1]);
  }

  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_RGBA);
  glutInitWindowSize(WIDTH, HEIGHT);
  glutCreateWindow("CONVOLVE");

  glutDisplayFunc(drawImage);	  // display callback
  glutKeyboardFunc(handleKey);
  glutReshapeFunc(handleReshape); // window resize callback

  glutMainLoop();
  return 0;
}
