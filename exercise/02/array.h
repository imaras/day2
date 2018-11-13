// do not use standard container as member or base class
class array
{
private:
	double* p;
	int n;
	void copy_impl(const array& other);
public:
	array();
	array(int size, double value);
	array(const array& other);
	array(array&& other);
	~array();
	int size() const;
	double at(int index) const;
	array& operator=(const array& other);
};
