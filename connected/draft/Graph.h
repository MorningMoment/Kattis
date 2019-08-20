typedef enum {UNDISCOVERED,DISCOVERED,VISITED} Vstatus;

class Graph{
public:
	int n;
	virtual Vstatus& status(int) = 0; 
};

struct Vertex{
	int data; Vstatus status;
	Vertex(int const& d = (int) 0):data(d),status(UNDISCOVERED){}
};

 
