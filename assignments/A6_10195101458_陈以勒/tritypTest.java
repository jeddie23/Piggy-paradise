package test;

import org.junit.After;
import org.junit.Before;
import org.junit.Test;

import static org.junit.Assert.*;

public class tritypTest {

    @Before
    public void setUp() throws Exception {
        System.out.println("测试开始");
    }

    @After
    public void tearDown() throws Exception {
        System.out.println("测试结束");
    }
    
    public static trityp tri=new trityp();

    @Test
    public void triang() {
        assertEquals(4,tri.Triang(-1,-2,-3));
        assertEquals(4,tri.Triang(-1,2,3));
        assertEquals(4,tri.Triang(1,-2,3));
        assertEquals(4,tri.Triang(1,2,-3));
        assertEquals(4,tri.Triang(1,-2,-3));
        assertEquals(4,tri.Triang(0,2,3));
        assertEquals(4,tri.Triang(1,2,3));
        assertEquals(1,tri.Triang(2,3,4));
        assertEquals(3,tri.Triang(6,6,6));
        assertEquals(2,tri.Triang(2,2,3));
        assertEquals(2,tri.Triang(3,4,3));
        assertEquals(2,tri.Triang(4,3,3));
        assertEquals(4,tri.Triang(3,3,8));
    }
}