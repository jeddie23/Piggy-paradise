package junit4;

import static org.junit.jupiter.api.Assertions.assertEquals;

import org.junit.jupiter.api.Test;

class tritypTest {
    public static trityp t=new trityp();
	@SuppressWarnings("static-access")
	@Test
	void test() {
		assertEquals(4,t.Triang(-1,-2,-3));
		assertEquals(4,t.Triang(-1,2,3));
		assertEquals(4,t.Triang(-1,-2,3));
		assertEquals(4,t.Triang(1,-2,3));
		assertEquals(4,t.Triang(1,-2,-3));
		assertEquals(4,t.Triang(1,2,-3));
		assertEquals(4,t.Triang(0,2,-3));
		assertEquals(4,t.Triang(1,1,2));
		assertEquals(1,t.Triang(3,5,7));
		assertEquals(2,t.Triang(3,3,2));
		assertEquals(2,t.Triang(3,2,3));
		assertEquals(2,t.Triang(2,3,3));
		assertEquals(4,t.Triang(3,5,2));
		assertEquals(4,t.Triang(5,3,2));
		assertEquals(4,t.Triang(3,2,5));
		assertEquals(3,t.Triang(3,3,3));
		assertEquals(2,t.Triang(7,7,1));
		assertEquals(2,t.Triang(7,1,7));
		assertEquals(2,t.Triang(1,7,7));
		assertEquals(4,t.Triang(77,7,7));
		assertEquals(4,t.Triang(7,7,77));
		assertEquals(4,t.Triang(7,77,7));
	}
}
