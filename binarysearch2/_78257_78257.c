/* TODO: since LDCAD's -height and +height co-ords are inverted, we need to take any table
entry from above which matches the users input an then invert it before writing the output file. */

/* TODO: since LDCAD writes file output lines in a LIFO manner, but that is confusing to read, I'm writing
the output in a FIFO DS. */

Rule _78257_78257[] = 
{               //always put color 2 first and then color 4.
	{1  , "78257 P1<2> c1 = 78257 P2<4> s1; //collision" , "1 2 0 -8 0 1 0 0 0 1 0 0 0 1 78257.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/78257.dat
                                                           "1 4 0  0 0 1 0 0 0 1 0 0 0 1 78257.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/78257.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_78257_78257/1/_78257_78257.ldr\*/}, 
	{2  , "78257 P1<2> s1 = 78257 P2<4> c1; //collision" , "1 2 0  8 0 1 0 0 0 1 0 0 0 1 78257.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/78257.dat
                                                           "1 4 0  0 0 1 0 0 0 1 0 0 0 1 78257.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/78257.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_78257_78257/2/_78257_78257.ldr\*/}, 
	{3  , "78257 P2<2> c1 = 78257 P1<4> s1; //collision" , "1 4 0  0 0 1 0 0 0 1 0 0 0 1 78257.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/78257.dat
                                                           "1 2 0 -8 0 1 0 0 0 1 0 0 0 1 78257.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/78257.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_78257_78257/3/_78257_78257.ldr\*/}, 
	{4  , "78257 P2<2> s1 = 78257 P1<4> c1; //collision" , "1 4 0  0 0 1 0 0 0 1 0 0 0 1 78257.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/78257.dat
                                                           "1 2 0  8 0 1 0 0 0 1 0 0 0 1 78257.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/78257.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_78257_78257/4/_78257_78257.ldr\*/},
};