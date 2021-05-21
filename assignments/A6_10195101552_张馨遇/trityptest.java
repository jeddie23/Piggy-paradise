package testproject;

import static org.junit.Assert.*;

import org.junit.Test;

public class trityptest {

	public static trityp t=new trityp();
	@Test
	public void test() {
		assertEquals(4,t.Triang(-1, -2, -3));
		assertEquals(4,t.Triang(-1, -2, 3));
		assertEquals(4,t.Triang(-1, 2, -3));
		assertEquals(4,t.Triang(1, -2, -3));
		assertEquals(4,t.Triang(-1, 2, 3));
		assertEquals(4,t.Triang(1, -2, 3));
		assertEquals(4,t.Triang(1, 2, -3));
		assertEquals(4,t.Triang(1, 2, 3));
		assertEquals(4,t.Triang(-1, -2, -3));
		assertEquals(4,t.Triang(1, 1, 2));
		assertEquals(4,t.Triang(2, 1, 1));
		assertEquals(4,t.Triang(1, 2, 1));
		assertEquals(4,t.Triang(1, 2, 5));
		assertEquals(4,t.Triang(5, 1, 2));
		assertEquals(4,t.Triang(2, 5, 1));
		assertEquals(1,t.Triang(3, 5, 7));
		assertEquals(2,t.Triang(2, 2, 3));
		assertEquals(2,t.Triang(2, 3, 2));
		assertEquals(2,t.Triang(3, 2, 2));
		assertEquals(3,t.Triang(3, 3, 3));
	}

}
