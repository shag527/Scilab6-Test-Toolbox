//---------------------------------------Function definition-----------------------------------------//
void transpose(double *mat, int row, int col)
{
    int next, idx;
	double temp;
	for (int i=0;i<=row*col-1;i++) 
	{
		next=i;
		idx=0;
		do
		{	idx++;
			next=(next%row)*col+next/row;
		} while(next>i);

		if(next<i||idx==1) 
		continue;

		temp = mat[next=i];
		do
		{
			idx=(next%row)*col+next/row;
			mat[next]=(idx==i)?temp:mat[idx];
			next=idx;
		} while(next>i);
	}
}