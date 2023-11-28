/* TODO: since LDCAD's -height and +height co-ords are inverted, we need to take any table
entry from above which matches the users input an then invert it before writing the output file. */

/* TODO: since LDCAD writes file output lines in a LIFO manner, but that is confusing to read, I'm writing
the output in a FIFO DS. */

Rule _15070_15070[] = 
{               //always put color 2 first and then color 4.
	{1  , "15070 P1<2> c1 = 15070 P2<4> s1; //collision" , "1 2 0 -8 0 1 0 0 0 1 0 0 0 1 15070.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/15070.dat
                                                           "1 4 0  0 0 1 0 0 0 1 0 0 0 1 15070.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/15070.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_15070_15070/1/_15070_15070.ldr\*/}, 
	{2  , "15070 P1<2> s1 = 15070 P2<4> c1; //collision" , "1 2 0  8 0 1 0 0 0 1 0 0 0 1 15070.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/15070.dat
                                                           "1 4 0  0 0 1 0 0 0 1 0 0 0 1 15070.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/15070.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_15070_15070/2/_15070_15070.ldr\*/}, 
	{3  , "15070 P2<2> c1 = 15070 P1<4> s1; //collision" , "1 4 0  0 0 1 0 0 0 1 0 0 0 1 15070.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/15070.dat
                                                           "1 2 0 -8 0 1 0 0 0 1 0 0 0 1 15070.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/15070.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_15070_15070/3/_15070_15070.ldr\*/}, 
	{4  , "15070 P2<2> s1 = 15070 P1<4> c1; //collision" , "1 4 0  0 0 1 0 0 0 1 0 0 0 1 15070.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/15070.dat
                                                           "1 2 0  8 0 1 0 0 0 1 0 0 0 1 15070.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/15070.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_15070_15070/4/_15070_15070.ldr\*/},
};