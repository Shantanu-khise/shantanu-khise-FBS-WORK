class calShape 
{
void Shape(int base,int height){
     float res=0.5f * base * height;
    System.out.println(res);
}

void Shape(float length,float breadth){
float RES=length * breadth;
System.out.println(RES);
}

void Shape(double area){
 double ar=area*area*3.14;
System.out.println(ar);
}
}
class TestShape
{
public static void main(String[]t)
{
calShape s1;
s1=new calShape();

s1.Shape(50,40);
s1.Shape(20.7,70.8);
s1.Shape(18);
}
}