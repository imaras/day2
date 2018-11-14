
class point
{
private:
	int x;
	int y;
public:
	point();
	point(int x, int y);
	bool operator==(const point& other) const;
	bool operator!=(const point& other) const;
	bool operator<(const point& other) const;
};