/* TODO: since LDCAD's -height and +height co-ords are inverted, we need to take any table
entry from above which matches the users input an then invert it before writing the output file. */

/* TODO: since LDCAD writes file output lines in a LIFO manner, but that is confusing to read, I'm writing
the output in a FIFO DS. */

Rule _26047_26047[] = 
{               //always put color 2 first and then color 4.
	{1  , "26047 P1<2> c1 = 26047 P2<4> s1; //collision" , "1 2 0 -8 0 1 0 0 0 1 0 0 0 1 26047.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/26047.dat
                                                           "1 4 0  0 0 1 0 0 0 1 0 0 0 1 26047.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/26047.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_26047_26047/1/_26047_26047.ldr\*/}, 
	{2  , "26047 P1<2> s1 = 26047 P2<4> c1; //collision" , "1 2 0  8 0 1 0 0 0 1 0 0 0 1 26047.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/26047.dat
                                                           "1 4 0  0 0 1 0 0 0 1 0 0 0 1 26047.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/26047.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_26047_26047/2/_26047_26047.ldr\*/}, 
	{3  , "26047 P2<2> c1 = 26047 P1<4> s1; //collision" , "1 4 0  0 0 1 0 0 0 1 0 0 0 1 26047.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/26047.dat
                                                           "1 2 0 -8 0 1 0 0 0 1 0 0 0 1 26047.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/26047.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_26047_26047/3/_26047_26047.ldr\*/}, 
	{4  , "26047 P2<2> s1 = 26047 P1<4> c1; //collision" , "1 4 0  0 0 1 0 0 0 1 0 0 0 1 26047.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/26047.dat
                                                           "1 2 0  8 0 1 0 0 0 1 0 0 0 1 26047.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/26047.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_26047_26047/4/_26047_26047.ldr\*/},
};