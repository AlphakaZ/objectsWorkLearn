
struct Point
{
    double x,y;
    Point(double xx, double yy):x(xx),y,(yy){}
};

class IShape
{
public:
    virtual void Draw()const = 0;
    virtual ~IShape(){}
};

class Circle : public IShape
{
protected:
    double radius_;
    Point center_;

public:
    explicit Circle(double radius, Point center)
    :radius_(radius),center_(center){}
    virtual ~Circle()override{}

    virtual void Draw()const override{
        //描画する
    }
};

class BigCircle : public Circle
{
public:
    explicit BigCircle(double radius, Point center)
    :circle(radius,center){}
    virtual ~BigCircle()override{}

    virtual void Draw()const override{
        //描画する
    }
};

class Square : public IShape
{
protected:
    double side_;
    Point top_left_;
public:
    explicit Square(double side, Point top_left)
    :side_(side),top_left_(top_left){}
    virtual ~Square()override{}

    virtual void Draw()const override{
        //描画する
    }
}

class BigSquare : public Square
{
public:
    explicit BigSquare(double side, Point top_left)
    :Square(side,top_left){}

    virtual void Draw()const override{
        //描画する
    }
}

class DrawingTool
{
public:
    void DrawAllShapes(const std::vector<IShape*> &shapes)const{
        for(const auto& shape : shapes){
            shape->Draw();
        }
    }
};

// 実行関数

void testDrawAllShapes() {
  Circle* circle = new BigCircle(10, Point(20,20));
  Square* square = new BigSquare(/*side*/ 50, /*topLeft*/ Point(10,10));
  DrawingTool drawingTool = new DrawingTool();
  std::vector<IShape*> shapeList;
  shapeList.push_back(circle);
  shapeList.push_back(square);
  drawingTool.DrawAllShapes(shapeList);
}
