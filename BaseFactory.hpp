class BaseFactory {
  public:
    virtual op* createOp(double value) = 0;

    virtual Rand* createRand() = 0;
};
