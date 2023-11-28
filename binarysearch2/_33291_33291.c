/* TODO: since LDCAD's -height and +height co-ords are inverted, we need to take any table
entry from above which matches the users input an then invert it before writing the output file. */

/* TODO: since LDCAD writes file output lines in a LIFO manner, but that is confusing to read, I'm writing
the output in a FIFO DS. */

Rule _33291_33291[] = 
{               //always put color 2 first and then color 4.
	{1  , "33291 P1<2> c1 = 33291 P2<4> s1; //collision" , "1 2 0 -8 0 1 0 0 0 1 0 0 0 1 33291.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/33291.dat
                                                           "1 4 0  0 0 1 0 0 0 1 0 0 0 1 33291.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/33291.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_33291_33291/1/_33291_33291.ldr\*/}, 
	{2  , "33291 P1<2> s1 = 33291 P2<4> c1; //collision" , "1 2 0  8 0 1 0 0 0 1 0 0 0 1 33291.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/33291.dat
                                                           "1 4 0  0 0 1 0 0 0 1 0 0 0 1 33291.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/33291.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_33291_33291/2/_33291_33291.ldr\*/}, 
	{3  , "33291 P2<2> c1 = 33291 P1<4> s1; //collision" , "1 4 0  0 0 1 0 0 0 1 0 0 0 1 33291.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/33291.dat
                                                           "1 2 0 -8 0 1 0 0 0 1 0 0 0 1 33291.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/33291.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_33291_33291/3/_33291_33291.ldr\*/}, 
	{4  , "33291 P2<2> s1 = 33291 P1<4> c1; //collision" , "1 4 0  0 0 1 0 0 0 1 0 0 0 1 33291.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/33291.dat
                                                           "1 2 0  8 0 1 0 0 0 1 0 0 0 1 33291.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/33291.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_33291_33291/4/_33291_33291.ldr\*/},
};