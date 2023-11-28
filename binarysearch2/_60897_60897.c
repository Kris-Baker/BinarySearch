/* TODO: since LDCAD's -height and +height co-ords are inverted, we need to take any table
entry from above which matches the users input an then invert it before writing the output file. */

/* TODO: since LDCAD writes file output lines in a LIFO manner, but that is confusing to read, I'm writing
the output in a FIFO DS. */

Rule _60897_60897[] = 
{               //always put color 2 first and then color 4.
	{1  , "60897 P1<2> c1 = 60897 P2<4> s1; //collision" , "1 2 0 -8 0 1 0 0 0 1 0 0 0 1 60897.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/60897.dat
                                                           "1 4 0  0 0 1 0 0 0 1 0 0 0 1 60897.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/60897.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_60897_60897/1/_60897_60897.ldr\*/}, 
	{2  , "60897 P1<2> s1 = 60897 P2<4> c1; //collision" , "1 2 0  8 0 1 0 0 0 1 0 0 0 1 60897.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/60897.dat
                                                           "1 4 0  0 0 1 0 0 0 1 0 0 0 1 60897.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/60897.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_60897_60897/2/_60897_60897.ldr\*/}, 
	{3  , "60897 P2<2> c1 = 60897 P1<4> s1; //collision" , "1 4 0  0 0 1 0 0 0 1 0 0 0 1 60897.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/60897.dat
                                                           "1 2 0 -8 0 1 0 0 0 1 0 0 0 1 60897.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/60897.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_60897_60897/3/_60897_60897.ldr\*/}, 
	{4  , "60897 P2<2> s1 = 60897 P1<4> c1; //collision" , "1 4 0  0 0 1 0 0 0 1 0 0 0 1 60897.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/60897.dat
                                                           "1 2 0  8 0 1 0 0 0 1 0 0 0 1 60897.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/60897.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_60897_60897/4/_60897_60897.ldr\*/},
};