#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
  #define all(v)         ((v).begin()),((v).end())
   #define clr(arr,x)     memset(arr,x,sizeof(arr))
    #define pb             push_back
const int OO = 1e9;
const double EPS = 1e-9;


void fast()
{
  ios_base::sync_with_stdio(NULL);
   cin.tie(0);
    cout.tie(0);
}


void input()
{
 freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
}


struct Point{
    double x;
    double y;

    Point(const double x, const double y)
    : x(x) , y(y)
    {

    }

};


struct Circle{
    Point center;
    int r;

    Circle(const Point &center , const int r)
    : center(center), r(r)
    {

    }

    static Circle read(){
        int i , j , r;
        cin >> j >> i >> r;

        return Circle(Point(i , j) , r);
    }

    bool isCircle(int i , int j) const{
        double xi = i - center.x;
        double yi = j - center.y;

        return (xi * xi + yi * yi <= r * r);
    }

};


struct Triangle{

    Point p1;
    Point p2;
    Point p3;

    Triangle(const Point &p1 , const Point &p2 , const Point &p3)
    : p1(p1) , p2(p2) , p3(p3)
    {

    }

    double area() const{
        return (abs((p3.x - p1.x)*(p2.y - p1.y) - (p3.y - p1.y)*(p2.x - p1.x)) / 2);
    }

    bool isTriangle(Point p) const{
        return (this->area() == (Triangle(p1, p2, p).area()+Triangle(p2, p3, p).area()+Triangle(p3, p1, p).area()));
    }

};


struct Square{
    Point p1;
    Point p2;
    Point p3;
    Point p4;

    Square(const Point &p1 , const Point &p2 , const Point &p3, const Point &p4)
    : p1(p1) , p2(p2) , p3(p3) , p4(p4)
    {

    }

    static Square read(){
        int x1, y1, x2, y2;
        cin >> y1 >> x1 >> y2 >> x2;

        double xi = (x1 + x2) / 2.0;
        double yi = (y1 + y2) / 2.0;
        double xii = x1 - xi;
        double yii = y1 - yi;

        double mi = -1 * yii;
        double mj = xii;

        double x3 = xi + mi;
        double y3 = yi + mj;
        double x4 = xi - mi;
        double y4 = yi - mj;

        return Square(Point(x1, y1) , Point(x2, y2) , Point(x3, y3), Point(x4, y4));
    }

    bool isSquare(int x , int y) const{
        return (Triangle(p1, p3, p2).isTriangle(Point(x, y)) ||
                Triangle(p1, p3, p4).isTriangle(Point(x , y)));
    }
};



int main(){

    fast();

    int row , col;  cin >> col >> row;
    Circle c = Circle::read();
    Square s = Square::read();

    for(int x = 0; x < row; x++){
        for(int y = 0; y < col; y++){
            if(c.isCircle(x , y) || s.isSquare(x , y))
                cout << "#";
            else
                cout << ".";
        }
        cout << "\n";
    }


  return 0;
}
