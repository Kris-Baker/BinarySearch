/* TODO: since LDCAD's -height and +height co-ords are inverted, we need to take any table
entry from above which matches the users input an then invert it before writing the output file. */

/* TODO: since LDCAD writes file output lines in a LIFO manner, but that is confusing to read, I'm writing
the output in a FIFO DS. */

Rule _6141_6141[] = 
{               //always put color 2 first and then color 4.
	{1  , "6141 P1<2> c1 = 6141 P2<4> s1; //collision" , "1 2 0 -8 0 1 0 0 0 1 0 0 0 1 6141.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/6141.dat
                                                           "1 4 0  0 0 1 0 0 0 1 0 0 0 1 6141.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/6141.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_6141_6141/1/_6141_6141.ldr\*/}, 
	{2  , "6141 P1<2> s1 = 6141 P2<4> c1; //collision" , "1 2 0  8 0 1 0 0 0 1 0 0 0 1 6141.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/6141.dat
                                                           "1 4 0  0 0 1 0 0 0 1 0 0 0 1 6141.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/6141.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_6141_6141/2/_6141_6141.ldr\*/}, 
	{3  , "6141 P2<2> c1 = 6141 P1<4> s1; //collision" , "1 4 0  0 0 1 0 0 0 1 0 0 0 1 6141.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/6141.dat
                                                           "1 2 0 -8 0 1 0 0 0 1 0 0 0 1 6141.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/6141.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_6141_6141/3/_6141_6141.ldr\*/}, 
	{4  , "6141 P2<2> s1 = 6141 P1<4> c1; //collision" , "1 4 0  0 0 1 0 0 0 1 0 0 0 1 6141.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/6141.dat
                                                           "1 2 0  8 0 1 0 0 0 1 0 0 0 1 6141.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/6141.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_6141_6141/4/_6141_6141.ldr\*/},
};