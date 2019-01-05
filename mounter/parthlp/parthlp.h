#ifndef __PARTHLP_H__
#define __PARTHLP_H__

/*
	[IN] nDrive - ����� HDD 0..3,
	[IN] nPartition - ����� ������� �� ����� - 0..(N-1)
	[OUT] cLetter - 'A' -'Z', ���� ������ �����������, ����� 0;
	RETURN: 1 - OK (cLetter is valid),
			0 - ERROR
*/

int GetPartitionLetter(unsigned int nDrive, unsigned int nPartition, CHAR &cLetter);

#endif //__PARTHLP_H__