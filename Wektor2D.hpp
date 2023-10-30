class Wektor2D
{
public:
    /// @brief To jest konstruktor domyslny, to znaczy, ze nie przyjmuje żadnych parametrow.
    Wektor2D()
    {
        X = 0.0;
        Y = 0.0;
    }

    /// @brief To konstruktor przyjmujacy wspolrzedne wektora.
    /// @param XX Wartość wspolrzednej XX.
    /// @param YY Wartość wspolrzednej YY.
    Wektor2D(double XX, double YY)
    {
        X = XX;
        Y = YY;
    }

    /// @brief Zwraca wartość pola X.
    /// @return Wartość pola X.
    double getX()
    {
        return X;
    }
    
    /// @brief Zwraca wartość pola Y.
    /// @return Wartość pola Y.
    double getY()
    {
        return Y;
    }
 
    /// @brief Karze ustawić nową wartość pola X.
    /// @param nowy_X Wartosc ktora zostanie przypisana do pola X.
    void setX(double nowy_X)
    {
        X = nowy_X;
    }

    /// @brief Karze ustawić nową wartość pola Y.
    /// @param nowy_Y Wartosc ktora zostanie przypisana do pola Y.
    void setY(double nowy_Y)
    {
        Y = nowy_Y;
    }

private:

    /// @brief To jest deklaracja pola X.
    double X;

    /// @brief To jest pole Y.
    double Y;

};

Wektor2D operator+(Wektor2D v1, Wektor2D v2)
{
    double x = v1.getX() + v2.getX();
    double y = v1.getY() + v2.getY();
    return Wektor2D(x, y);
}

double operator*(Wektor2D v1, Wektor2D v2)
{
    double x = v1.getX() * v2.getX();
    double y = v1.getY() * v2.getY();
    return x + y;
}




