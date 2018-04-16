
class IShape
{
public:
    virtual void Draw() = 0;
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

    virtual void Draw()override{
        //描画する
    }
};

class BigCircle : public Circle
{
public:
    explicit BigCircle(double radius, Point center)
    :circle(radius,center){}
    virtual ~BigCircle()override{}

    virtual void Draw()override{
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

    virtual void Draw()override{
        //描画する
    }
}

class BigSquare : public Square
{
public:
    explicit BigSquare(double side, Point top_left)
    :Square(side,top_left){}

    virtual void Draw()override{
        //描画する
    }
}