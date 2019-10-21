import java.io.* ; 
import java.util.* ; 

public class something {
	public static void main( String[] args ) throws IOException {
		BufferedReader br = new BufferedReader( new InputStreamReader( System.in ) ) ; 
		List<Integer> list = Arrays.asList( 1 , 2 , 3 , 4 , 5 ) ; 
		list.forEach ( element -> ( element = element + 10 ? true : false  ) ) ;  
		list.forEach ( element -> print( element ) ) ;  
	}
	static void print( Object obj ) {
		System.out.println( obj ) ; 
	}
}

