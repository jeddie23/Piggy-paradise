import org.junit.*;

import java.util.Random;

import static org.junit.Assert.assertEquals;

public class TritypMutantTwoTest {
    TritypMutantTwo tri=new TritypMutantTwo();

    //    Triang = 1 if triangle is scalene
    //    Triang = 2 if triangle is isosceles
    //    Triang = 3 if triangle is equilaterala
    //    Triang = 4 if not a triangle

    @Test
    public void testTriang_4(){
        assertEquals(4,tri.Triang(1,2,7));
        assertEquals(1,tri.Triang(3,4,5));
        assertEquals(3,tri.Triang(3,3,3));
        assertEquals(4,tri.Triang(-1,-1,-1));
        assertEquals(4,tri.Triang(1,-1,-1));
        assertEquals(4,tri.Triang(1,1,-1));
        assertEquals(2,tri.Triang(3,3,5));
        assertEquals(4,tri.Triang(1,7,2));
        assertEquals(4,tri.Triang(7,2,1));
        assertEquals(2,tri.Triang(3,2,2));
        assertEquals(2,tri.Triang(3,5,3));
        assertEquals(1,tri.Triang(5,3,4));

    }
}