#define MAX_SIZE 100

typedef	struct Siblings
{
	int data;
	struct Siblings *next;	//adr of the next sibling

}*Sibling;

typedef	struct Nodes
{
	int data;	
	int	parent;	//location of parents
	Sibling child;	//adr of the first child
}*Node;


typedef struct Trees
{
	Node tree[MAX_SIZE];	//array of bodes
	int r, n;	//r is the location of the root,n is the number of nodes
};