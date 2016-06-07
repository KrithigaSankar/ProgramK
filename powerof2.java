

import java.util.*;
import java.lang.*;
import java.io.*;

class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
	  Scanner in =new Scanner(System.in);
	  Integer number;
	  number=in.nextInt();
	  if(Integer.bitCount(number)==1)
	  {
	  	System.out.println("Power of 2");
	  }
	  else
	  {
	  	System.out.println("Not a Power of 2");
	  }
	}
}
