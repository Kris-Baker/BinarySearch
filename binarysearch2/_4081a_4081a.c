/* TODO: since LDCAD's -height and +height co-ords are inverted, we need to take any table
entry from above which matches the users input an then invert it before writing the output file. */

/* TODO: since LDCAD writes file output lines in a LIFO manner, but that is confusing to read, I'm writing
the output in a FIFO DS. */

Rule _4081a_4081a[] = 
{               //always put color 2 first and then color 4.
	{1  , "4081a P1<2> c1 = 4081a P2<4> s1; //collision" , "1 2 0 -8 0 1 0 0 0 1 0 0 0 1 4081a.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/4081a.dat
                                                           "1 4 0  0 0 1 0 0 0 1 0 0 0 1 4081a.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/4081a.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_4081a_4081a/1/_4081a_4081a.ldr\*/}, 
	{2  , "4081a P1<2> s1 = 4081a P2<4> c1; //collision" , "1 2 0  8 0 1 0 0 0 1 0 0 0 1 4081a.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/4081a.dat
                                                           "1 4 0  0 0 1 0 0 0 1 0 0 0 1 4081a.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/4081a.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_4081a_4081a/2/_4081a_4081a.ldr\*/}, 
	{3  , "4081a P2<2> c1 = 4081a P1<4> s1; //collision" , "1 4 0  0 0 1 0 0 0 1 0 0 0 1 4081a.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/4081a.dat
                                                           "1 2 0 -8 0 1 0 0 0 1 0 0 0 1 4081a.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/4081a.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_4081a_4081a/3/_4081a_4081a.ldr\*/}, 
	{4  , "4081a P2<2> s1 = 4081a P1<4> c1; //collision" , "1 4 0  0 0 1 0 0 0 1 0 0 0 1 4081a.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/4081a.dat
                                                           "1 2 0  8 0 1 0 0 0 1 0 0 0 1 4081a.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/4081a.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_4081a_4081a/4/_4081a_4081a.ldr\*/},
};