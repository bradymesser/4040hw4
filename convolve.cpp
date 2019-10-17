#include "Helper.h"

int main(int argc, char * argv[]) {
  if (argc < 3 || argc > 4) {
    cout << "Invalid usage. Valid usages are the following:\n./convolve filter.filt in.img\n./convolve filter.filt in.img out.img\n";
    exit(1);
  } else {
    image = Image(argv[2]);
    originalImage = Image(argv[2]);
    filt = Filter(argv[1]);
  }
  filt.flip();

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
