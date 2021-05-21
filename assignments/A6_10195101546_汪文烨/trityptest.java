import org.junit.*;

import java.util.Random;

import static org.junit.Assert.assertEquals;

public class trityptest {
    trityp tri=new trityp();

    //    Triang = 1 if triangle is scalene
    //    Triang = 2 if triangle is isosceles
    //    Triang = 3 if triangle is equilaterala
    //    Triang = 4 if not a triangle

    @Test
    public void testTriang_4(){
        assertEquals(4,tri.Triang(1,2,7));
    }
}

