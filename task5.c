#include <stdio.h>

/*
 * ������� 1.
	������� ��� �ணࠬ�� ⠪, �⮡� ���ᨢ ���� �� 6 ������⮢.
 */

int main()
{
    int mlen = 6;		// �᫮ ������⮢ ���ᨢ�
    int a[mlen];		// ��� ���ᨢ
    int i;				// ���稪 横��

    /* ����� ���짮��⥫� ���᪠��� */
    printf("��������, ������ %i 楫�� �᫠.\n", mlen);

    /* ⥯��� ����稬 �� ���� 4 �᫠ */
    for(i=0; i<mlen; i++)
    {
        printf("������ %d-� �᫮: ", i+1);		// %d � ��, �� � %i
        scanf("%i", &a[i]);
    }

    /* � ⥯��� �����⠥� �� �᫠ ����� ����। */
    for(i=mlen; i>0; i--)
    {
        printf("%i ", a[i-1]);
    }
    printf("\n");

    return 0;
}
