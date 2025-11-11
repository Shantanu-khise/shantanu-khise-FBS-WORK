class calculator
{
 void add(int a,int b)
{
System.out.println("addition");
 System.out.println(a+b);
}

void add(double a,double b)
{
 System.out.println(a+b);
}

void add(int a,double b)
{
 System.out.println(a+b);
}

void add(double a,int b)
{
System.out.println(a+b);
}
//addition ends 


void mul(int x,int y)
{
System.out.println("multiply");
System.out.println(x*y);
}

void mul(double x,double y)
{

System.out.println(x*y);
}

void mul(int x,double y)
{
 System.out.println(x*y);
}

void mul(double x,int y)
{
System.out.println(x*y);
}
// multiplication ends

void div(int c,int d)
{
System.out.println("division");

 System.out.println(c/d);
}

void div(double c,double d)
{
 System.out.println(c/d);
}

void div(int c,double d)
{
 System.out.println(c/d);
}

void div(double c,int d)
{
 System.out.println(c/d);
} // division ends

void sub(int v,int w)
{
System.out.println("substraction");

System.out.println(v-w);
}

void sub(double v,double w)
{
System.out.println(v-w);
}

void sub(int v,double w)
{
System.out.println(v-w);
}

void sub(double v,int w)
{
System.out.println(v-w);
}// substract ends

}// class ends

class Testcalci
{
 public static void main(String []a)
{
 calculator c1;
 c1=new calculator();

c1.add(10,20);
c1.add(30,20);
c1.add(50,200);
c1.add(10,20);

c1.mul(10,20);
c1.mul(30,20);
c1.mul(50,200);
c1.mul(10,20);
 
c1.div(10,20);
c1.div(30,20);
c1.div(50,200);
c1.div(10,20);

c1.sub(10,20);
c1.sub(30,20);
c1.sub(50,200);
c1.sub(10,20);

}
}